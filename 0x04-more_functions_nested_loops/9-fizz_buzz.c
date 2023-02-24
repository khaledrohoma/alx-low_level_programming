#include "main.h"
/**
 * main - prints the numbers 1 to 100  
 * print Fizz instead of multiplies of 3
 * print Buzz instead of multiplies of 3 & 5
 */

int main (void)
{
	int i;
	for (i = 1; i > 100; i++)
	{
		if(i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if(i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);	
		}
	}
}
