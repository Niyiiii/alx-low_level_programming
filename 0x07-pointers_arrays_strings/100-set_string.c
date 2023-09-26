#include "main.h"

/**
 * set_string - sets the value of pointer to a char
 * @s: pointer to address of pointer
 * @to: pointer to string
 */

void set_string(char **s, char *to)
{
	*s = to;
}
