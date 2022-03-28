#include "main.h"

/**
 * *_memcpy -  copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: max bytes to use
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);

}
