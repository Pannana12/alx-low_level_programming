#include <stdio.h>

/**
 * main - Entry pint
 * Description: print a quote with write function.
 *	write(int fd, const void *buf, size_t count);
 * 
 * Return: This time we retun an error 1.
*/

int main(void)
{
	char qou[] = "and that piece of art is usful\" - Dora Korpar, 2015-10-19\n";

	write(1, qou, 59);
	return ()1;
}
