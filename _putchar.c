#include "main.h"
#include <unistd.h>

/**
<<<<<<< HEAD
<<<<<<< HEAD
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
=======
 * _puts - prints a string with newline
 * @str: the string to print
 * eturn:( str-a)
=======
 * _putchar - writes the character c to stdout
<<<<<<< HEAD
 * @c: the character to print
 * Return: 0 on success and -1 error and errno is set appropiately
>>>>>>> 31523df0d361a53b6235da9118f3468ef95a676b
 */
int _putchar(char c)
{
<<<<<<< HEAD
>>>>>>> 3d3f5bde3e1dbce064c7bc954ab272e7051b1aa0
=======
	return (write(1, &c, 1));
=======
 * @c: The character to print
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
>>>>>>> 406cd7db417284728c842755743e7296a93c0f6e
}
>>>>>>> 31523df0d361a53b6235da9118f3468ef95a676b
