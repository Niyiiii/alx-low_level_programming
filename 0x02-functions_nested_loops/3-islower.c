#include "main.h"
/**
 * _islower - program to check for lower case character
 * @o: input character
 * Return: 1 for lower case character, else return 0
 */

int _islower(int o)
{
	if (o >= 97 && o <= 122)
	{
		return (1);
	}
	return (0);
}
