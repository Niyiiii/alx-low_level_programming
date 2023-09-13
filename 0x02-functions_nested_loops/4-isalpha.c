#include "main.h"
/**
 * _isalpha - program that checks for alphabetic charaters
 * @o: character to check
 * Return: 1 if alphabetic character, else return 0
 */

int _isalpha(int o)
{
	if ((o >= 65 && o <= 97) || (o >= 97 && o <= 122))
	{
		return (1);
	}
	return (0);
}
