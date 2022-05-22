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
}
>>>>>>> 31523df0d361a53b6235da9118f3468ef95a676b
