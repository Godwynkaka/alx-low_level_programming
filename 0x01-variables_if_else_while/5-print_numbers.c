#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int base10num = 0;

	while (base10num <= 9)
	{
		printf("%i", base10num);
		++base10num;
	}
	printf("\n");

	return (0);
}
