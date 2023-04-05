#include "main.h"

/**
 *_memset: this is a function which will fill the memory with a constant byte
 * where s is an input pointer (pointing to n)
 * where n is the size of the bytes of memory area pointed to  
 * where b is the constant byte with which the memory will be filled
 *
 *
 * Return: A pointer to the filled memory area represented by s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
  /** Declaring an unsigned int to store a non-negative value
      value can only be zero or a positive number

   */
      unsigned int i;
      
      for (i = 0; i < n; i++)
	s[i] = b;

      return(s);
}
     
