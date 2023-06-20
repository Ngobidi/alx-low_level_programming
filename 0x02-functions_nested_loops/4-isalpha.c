#include "main.h"

/**
 * _isalpha - only alphabetic character
 * 
 * Return: 1 if c is a letter, 0 else
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
