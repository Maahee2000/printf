<<<<<<< HEAD
#ifndef _MAIN_H_
#define _MAIN_H_
#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int print_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
int print_upx(va_list arguments, char *buf, unsigned int ibuf);
int print_usr(va_list arguments, char *buf, unsigned int ibuf);
int print_add(va_list arguments, char *buf, unsigned int ibuf);
int print_rev(va_list arguments, char *buf, unsigned int ibuf);
int print_rot(va_list arguments, char *buf, unsigned int ibuf);
int prinlint(va_list arguments, char *buf, unsigned int ibuf);
int prinlunt(va_list arguments, char *buf, unsigned int ibuf);
int prinloct(va_list arguments, char *buf, unsigned int ibuf);
int prinlhex(va_list arguments, char *buf, unsigned int ibuf);
int prinlupx(va_list arguments, char *buf, unsigned int ibuf);
int prinhint(va_list arguments, char *buf, unsigned int ibuf);
int prinhunt(va_list arguments, char *buf, unsigned int ibuf);
int prinhoct(va_list arguments, char *buf, unsigned int ibuf);
int prinhhex(va_list arguments, char *buf, unsigned int ibuf);
int prinhupx(va_list arguments, char *buf, unsigned int ibuf);
int prinpint(va_list arguments, char *buf, unsigned int ibuf);
int prinnoct(va_list arguments, char *buf, unsigned int ibuf);
int prinnhex(va_list arguments, char *buf, unsigned int ibuf);
int prinnupx(va_list arguments, char *buf, unsigned int ibuf);
int prinsint(va_list arguments, char *buf, unsigned int ibuf);
int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int print_buf(char *buf, unsigned int nbuf);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
char *fill_oct_array(char *bnr, char *oct);
char *fill_long_oct_array(char *bnr, char *oct);
char *fill_short_oct_array(char *bnr, char *oct);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);


#endif
=======
#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int loop_format(const char *format, va_list args);
int check_percent(int *flag, char charac);
int func_service(char charac, va_list args);
int _switch(char c, va_list arg);
int print_character(va_list arg);
int print_signInt(va_list arg, int base);
int print_unsignedInt(va_list arg, int base);
int print_base16_upper_lower(va_list arg, char *rep);
int print_addr(va_list arg);
int print_string(va_list arg);
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
char *convert_to_format(char *rep, unsigned int number, int base);

#endif /*MAIN_H*/
>>>>>>> 3d3f5bde3e1dbce064c7bc954ab272e7051b1aa0
