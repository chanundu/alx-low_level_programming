#include <stdio.h>

/**
*main - The alphabet in lowercase
*
*Description: Putchar prints alphabets in order
*Return: 0
*/

int main(void)
{
	char alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');

	return (0);
}
