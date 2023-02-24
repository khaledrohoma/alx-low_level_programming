#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers 1 to 100  
 * print Fizz instead of multiplies of 3
 * print Buzz instead of multiplies of 5
 */

int main (void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if(i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if(i % 3 != 0 && i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if(i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
                {
                        printf("%d", i);
                }
		else
		{
			printf("%d ", i);	
		}
	}
	printf("\n");
	return(0);
}
