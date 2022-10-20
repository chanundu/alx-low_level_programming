#include <stdio.h>

/**
*main - Entry point of the program
*
*Description: Putchars all letters except e & q
*Return: 0
*/

int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt != 'e' && alphabt != 'q')
		{
			putchar(alphabt);
		}
	}
	putchar('\n');

	return (0);
}

