#include "main.h"

/**
<<<<<<< HEAD
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 *
=======
 * convert - this converts number and base into string
 * @num: the input number
 * @base: the input base
 * @lowercase: flag if hexa values need to be lowercase
>>>>>>> 31523df0d361a53b6235da9118f3468ef95a676b
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
<<<<<<< HEAD
	static char *pre;
	static char buffer[50];
	char *ptr;

	pre = (lowercase)
=======
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
>>>>>>> 31523df0d361a53b6235da9118f3468ef95a676b
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
<<<<<<< HEAD
	do {
		*--ptr = pre[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
=======
	do
	{
		*--ptr = rep[num % base];
		num /= base;
	}
	while (num != 0);
	return (ptr);
}

>>>>>>> 31523df0d361a53b6235da9118f3468ef95a676b
