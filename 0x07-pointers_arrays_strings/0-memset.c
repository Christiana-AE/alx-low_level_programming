#include "main.h"

/**
 *_memset: this is a function which will fill the memory with a constant byte
 * @s is an input pointer (pointing to n)
 * @n is the size of the bytes of memory area pointed to  
 * @b is the constant byte with which the memory will be filled
 *
 *
 * Return: A pointer to the filled memory area represented by s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int which will only store a non negative number
	 * Number will only be zero or positive 
	*/
  
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}     
