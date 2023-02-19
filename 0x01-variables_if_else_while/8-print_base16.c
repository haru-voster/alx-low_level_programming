#include <stdio.h>
/**
 *a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 */
int main(void)
{
	char c;

	int i;

	c = 'a';
	i = 0;
	while
		(i < 10) {
			putchar(i + '0');
			i++;
		}
	while
		(c <= 'f')
	         {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
