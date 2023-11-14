# _printf Project

This project involves creating a simplified version of the printf function in C. The goal is to implement a custom printf function with limited functionality, supporting conversion specifiers such as %c, %s, %d, %i, and %%.

# Functionality

The _printf function prints output according to a given format string, supporting the following conversion specifiers:

%c: Print a single character.
%s: Print a string.
%d or %i: Print an integer.
%%: Print a literal percent sign.
The function returns the number of characters printed (excluding the null byte used to end output to strings).

# Project Constraints

The code should be written in C.
Compilation should be done on Ubuntu 20.04 LTS using gcc with specific options.
The code should follow the Betty style.
No global variables are allowed.
No more than 5 functions per file.

# Compilation

The code will be compiled using the following command:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
