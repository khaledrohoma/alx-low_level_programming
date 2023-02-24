#include "main.h"

/**
 * main - function to print triangle 
 * return - always 0
 */

void print_triangle(int size)
{
	int i, j, k;
	
	if(size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for(i = 0; i < size; i++)
		{
			for(j = i; j < size - 1; j++)
			{
				_putchar(' ');
			}
			for(k = 1; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
