#include "main.h"
/**
 *  print_alphabet_x10 - a function that prints 10x the alphabet
 *
 *  return 10x a-z
 */

void print_alphabet_x10()
{
	int n, i;
	i = 0;
	while (i < 10)
	{
		for ( n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		i++;
		 _putchar('\n')
	}
}
