#include <stdio.h>
/*a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 */
int main(void)
{
	int a;

	a = 0;
	while
		(a < 10) {
			putchar(a + '0');
			a++;
		}
	putchar('\n');
	return (0);
}
