#include "main.h"
/**
 * _printf - printf function with limited functionality (%%, %c, %s, %i, %d).
 * @format: Format string with conversion specifiers.
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
va_list Elements;
int counter = 0;
va_start(Elements, format);

while (*format)
{
if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's'))
{
if (*(format + 1) == 'c')
{
char characater = (char)va_arg(Elements, int);
counter += write(1, &characater, 1);
}
else
{
char *string = va_arg(Elements, char *);
char *dynamic_str = _malloc(strlen(string ? string : "(null)") + 1);
strcpy(dynamic_str, string ? string : "(null)");
counter += write(1, dynamic_str, strlen(dynamic_str));
_free(dynamic_str);
}
format += 2;
}
else if (*format == '%' && (*(format + 1) == 'i' || *(format + 1) == 'd'))
{
char buffer[12];
counter += write(1, buffer, sprintf(buffer, "%d", va_arg(Elements, int)));
format += 2;
}
else if (*format == '%' && *(format + 1) == '%')
counter += write(1, "%", 1), format += 2;
else
counter += write(1, format++, 1);
}
va_end(Elements);
return (counter);
}
