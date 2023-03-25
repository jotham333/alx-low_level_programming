#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>


/**
 *print_all - print all the string of a valid format specifier
 *
 *@format: the parameter
 */




void print_all(const char * const format, ...)
{
	int i, len;
	char *str;
	va_list args;
	int valid_format;

	len = strlen(format);

	va_start(args, format);

	i = 0;
	valid_format = 0;
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c",  va_arg(args, int));
				valid_format = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				valid_format = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				valid_format = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				valid_format = 1;
				break;
			default:
				break;
		}
		if (i < len - 1 && format[i + 1] != '\0' && valid_format)
			printf(", ");
		valid_format = 0;
		i++;
	}
	va_end(args);
	printf("\n");
}

