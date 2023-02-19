#include <stdio.h>
/**
 * three  diff numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int one = '0';
	int ten = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (ten = '0'; ten <= '9'; ten++)
		{
			for (one = '0'; one <= '9'; one++)
			{
				if (!((one == ten) || (ten == hundred) ||
							(ten > one) || (hundreds > ten)))
				{
					putchar(hundreds);
					putchar(ten);
					putchar(one);
					if (!(one == '9' && hundreds == '7' && ten == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}//results
	}
	putchar('\n');
	return (0);
}
