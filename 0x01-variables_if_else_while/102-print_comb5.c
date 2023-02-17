#include <stdio.h>

/**
 * main - Enrty point
 *
 * Description - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstDig = 0, secDig;

	while (firstDig <= 99)
	{
		secDig = firstDig;
		while (secDig <= 99)
		{
			if (secDig != firstDig)
			{
				putchar((firstDig / 10) + 48);
				putchar((firstDig % 10) + 48);
				putchar(' ');
				putchar((secDig / 10) + 48);
				putchar((secDig % 10) + 48);

				if (firstDig != 98 || secDig != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++secDig;
		}
		++firstDig;
	}
	putchar('\n');

	return (0);
}
