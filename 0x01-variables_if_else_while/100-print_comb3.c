#include <stdio.h>

/**
  * main - entry
  * Return: 0
  */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		int m = n + 1;

		while (m <= '9')
		{
			putchar(n);
			putchar(m);

			if (n < '8')
			{
				putchar(',');
				putchar(' ');
			}

			m++;
		}

		n++;
	}
	putchar('\n');

	return (0);
}
