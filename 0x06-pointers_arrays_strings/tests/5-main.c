#include "../main.h"
#include <stdio.h>

/**
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Look up!\n";
	char *p;

	p = string_toupper(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
} 
