#include<stdio.h>
/**
 * main - print numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, m;

	for (i = 48; i < 56; i++)
	{
		for (m = 49; m < 57; i++)
		{
			if (m > i)
			{
				putchar(i);
				putchar(m);
				if (i != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
