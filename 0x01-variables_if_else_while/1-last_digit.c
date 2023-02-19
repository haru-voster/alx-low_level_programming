#include <time.h>
#include <stdio.h>
/*The number, followed by
if the number is greater than 0: is positive
if the number is 0: is zero
if the number is less than 0: is negative
followed by a new line*/
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
	return 0;
}
