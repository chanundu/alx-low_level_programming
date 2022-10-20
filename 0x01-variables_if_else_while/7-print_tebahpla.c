#include <stdio.h>

/**
 * main - this is the main entry point
 *
 * Description: THis prints the aplhabet in reverse
 * Return: 0
 */

int main(void)
{
	char rev;
		for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');

	return (0);

}
