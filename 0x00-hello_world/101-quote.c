#include <stdio.h>
#include <unistd.h>
/**
  * main - A program prints a certain sentence without printf of puts functions.
  * Return - always (1) Success
  */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	return (1);
}
