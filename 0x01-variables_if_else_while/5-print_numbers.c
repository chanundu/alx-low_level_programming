#include <stdio.h>

/**
*main - Entry point of program
*
*Description: Prints all single digit numbers 0-9
*Return: 0
*/

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
