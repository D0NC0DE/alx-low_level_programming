#include "main.h"

/**
  *_isalpha - function to check alphabet
  *@c: single character
  *Return: 1 if true and 0 if false
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
