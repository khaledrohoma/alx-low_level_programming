#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int n,i,j;
	if (n <= 0)
	{
		_putchar('\n');	
	}
	else
	{
		for(i = 0; i < n; i++)
		{
			for(j = i; j > n; j--)
			{
				_putchar('\0');	
			}
			_putchar('\');
		}
		_putchar('\n');
	}
}
