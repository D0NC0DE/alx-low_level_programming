#include <stdio.h>

/**
  * main - entry point
  * Return: 0
  */

int main(void)
{
	int l = '0';

	while (l <= '9')
	{
		int m = l + 1;

		while (m <= '9')
		{
			int n = m + 1;

			while (n <= '9')
			{
				putchar(l);
				putchar(m);
				putchar(n);

				if (l < '7')
				{
					putchar(',');
					putchar(' ');
				}
				n++;
			}
			m++;
		}
		l++;
	}
	putchar('\n');
	return (0);
}
