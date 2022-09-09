#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Determine if a random number is positive, negative or zero.
 * Return: 0 on success
 */

int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*code*/
	if (n < 0)
	{
		printif("%d is %s/n", n, "negetive");

	}
	elese id (n > 0)
	{
		printif("%d is %s\n", n, "positive");

	}
	else
	{
		printif("%d is %s\n", n, "zero");
	}
	return (0);
}
