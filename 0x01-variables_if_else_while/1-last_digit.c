#include <time.h>
#include <stdio.h>
/* more headers goes there */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* excecution part */
	m = n % 10;
	if (m > 5)
		printf("\nLast digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("\n Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("\nLast digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}