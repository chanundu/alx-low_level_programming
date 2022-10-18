#include <stdlib.h>
#include <time.h>
/*
 * main - This is the main entry point of the program
 * prints after comparison whether a number is psitive or negative
 * Return to end the program
 * */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n<1)
	{
		printf("%d is negative\n", n);
	} else if (n==0)
	{
		printf("%d is zero\n", n);
	} else 
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
