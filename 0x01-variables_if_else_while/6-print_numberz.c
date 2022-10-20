#include <stdio.h>

/**
*main - Entry point
*
*Description: Putchar integers 0-9
*Return: 0
*/

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
