#include "main.h"
/**
 * _malloc - Allocates memory using malloc.
 * @size: Number of bytes to allocate.
 * Return: A pointer to the allocated memory.
 */
void *_malloc(size_t size)
{
void *ptr = malloc(size);
if (ptr == NULL)
{
perror("malloc");
exit(EXIT_FAILURE);
}
return (ptr);
}
