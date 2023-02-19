#include <stdio.h>
/**
 * main -  program that prints the lowercase alphabet in reverse, followed by a new line.
 */

int main(void)
{
	char d;

	d = 'z';
	while(d >= 'a') 
	{
	putchar(d);
	d--;
		
	}
	putchar('\n');
	return (0);
}
