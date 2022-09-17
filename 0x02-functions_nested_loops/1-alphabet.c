#include "main.h"
#include "_putchar.h"

/**
  * main - entry point
  * Return: void
  */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	return (0);
}
