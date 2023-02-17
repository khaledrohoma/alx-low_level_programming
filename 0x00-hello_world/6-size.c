#include <stdio.h>
/**
 * main - Entry
 * Return: always 0
*/
int main(void)
{
    printf("Size of a char is: %i byte(s)\n",sizeof(char));
    printf("Size of a int is: %i byte(s)\n",sizeof(int));
    printf("Size of a long int is: %i byte(s)\n",sizeof(long int));
    printf("Size of a long long is: %i byte(s)\n",sizeof(long long int));
    printf("Size of a float is: %i byte(s)\n",sizeof(float));
}
