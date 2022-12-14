#include "main.h"
/**
 * main - Print Correct as a message
 *
 * Return: Always 0 (Good)
 */
int main(void)
{
	int str = {95, 112, 117, 115, 99, 104, 95, 113};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
