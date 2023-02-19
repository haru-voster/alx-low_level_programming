#include <stdio.h>
/**
 * main - Prints the alphabets without q and e
 */

int main(void)
{
	char f;

	f = 'a';
	while
		(f <= 'z') {
			if ((f != 'q' && f != 'e') && f <= 'z')
				putchar(f);
			f++;
		}
	putchar ('\n');
	return (0);
}
