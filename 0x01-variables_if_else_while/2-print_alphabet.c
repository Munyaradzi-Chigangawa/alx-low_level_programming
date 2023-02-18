#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
=======
 * main - entry point
 * Description - printing the alphabet in lowerCase
 * Return - 0 if successfully executed
 */

int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');
    return (0);
>>>>>>> 60a9549d43e491fbb7a3facbf76a2d508185a933
}
