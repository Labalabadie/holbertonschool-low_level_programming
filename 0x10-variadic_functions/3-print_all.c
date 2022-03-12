#include "variadic_functions.h"
#include <string.h>
#include <stddef.h>
/**
*p_s - Ptrints char *
*@s: given argument
*/
void p_s(va_list s)
{
	char *aux = va_arg(s, char*);

	if (aux == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", aux);
}
/**
 *p_c - Ptrints char *
 *@c: given argument
 */
void p_c(va_list c)
{
	printf("%c", (char) va_arg(c, int));
}
/**
 *p_f - Ptrints int
 *@f: given argument
 */
void p_f(va_list f)
{
	printf("%f", (float) va_arg(f, double));
}
/**
 *p_i - Ptrints float
 *@i: given argument
 */
void p_i(va_list i)
{
	printf("%d", va_arg(i, int));
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
		{"c", p_c}, {"i", p_i}, {"f", p_f}, {"s", p_s}, {NULL, NULL}
	};
	int i;
	int j;
	char *a = ", ";
	char *b = "";

	va_start(str, format);
	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (pr[j].x != NULL)
		{
			if (pr[j].x[0] == format[i])
			{
			printf("%s", b);
			pr[j].f(str);
			b = a;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(str);
}
