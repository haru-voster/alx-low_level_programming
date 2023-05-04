#include "main.h"

/**
  * haru-voster author
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return:converted number or 0 if it fails
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, stat;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;
	len--;
	for (stat = 1, uint = 0; len >= 0; len--)
	{
		if (b[len] == '0')
		{
			stat *= 2;
			continue;
		}
		else if (b[len] == '1')
		{
			uint += stat;
			stat *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}

