#include "variadic_functions.h"
/**
*p_s - Ptrints char *
*@str: given argument
*/
void p_s(va_list str)
{
	char *aux = va_arg(str, char*);

	if (aux == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", aux);
}
/**
 *p_c - Ptrints char *
 *@str: given argument
 */
void p_c(va_list str)
{
	printf("%c", va_arg(str, int));
}
/**
 *p_f - Ptrints int
 *@str: given argument
 */
void p_f(va_list str)
{
	printf("%f", va_arg(str, double));
}
/**
 *p_i - Ptrints float
 *@str: given argument
 */
void p_i(va_list str)
{
	printf("%d", va_arg(str, int));
}
/**
 *print_all - Prints any kind of argument given through a va_list
 *i:counter
 *j:counter for struct array
 *@format: const pointer to constanr array of char
 */
void print_all(const char * const format, ...)
{
	va_list str;
	chfun pr[] = {
		{'s', p_s}, {'c', p_c}, {'i', p_i}, {'f', p_f}, {'\0', NULL}
	};
	unsigned int i;
	unsigned int j;
	const char *a = ", ";
	const char *b = "";

	va_start(str, format);
	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (pr[j].x != '\0')
		{
			if (pr[j].x == format[i])
		{
			printf("%s", b);
			pr[j].f(str);
			b = a;
		}
		j++;
		}
		i++;
	}
	putchar('\n');
	va_end(str);
}
