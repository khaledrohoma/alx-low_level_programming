#include "main.h"

/**
 * main - function to print triangle 
 * return - always 0
 */

void print_triangle(int size)
{
	int i, j, k;
	
	for(i = 0; i < size; i++)
	{
		for(j = i; j < size - 1; j++)
		{
			_putchar(' ');
		}
		for(k = 0; k =< i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}	
