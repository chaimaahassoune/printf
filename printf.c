#include "main.h"

/**
 * _printf - Produces output according to a format
 *
 * @format: The format string
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	char *string;

	va_arg(arg, char *);
	va_list arg;
	va_start(arg, format);


	while(*format)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					_putchar(va_arg(arg, int));
					counter++;
					break;

				case 's':
				{
					if(!string)
					{
						string = NULL;
					}
					while(*string)
					{
						_putchar(*string);
						string++;
						counter++;
					}

					break;
				}

				case '%':
					_putchar('%');
					counter++;
					break;
				default:
					_putchar('%');
					counter++;
					_putchar(*format);
					counter++;
					break;
			}

		}

		else
		{
			_putchar(*format);
			counter++;
		}

		format++;
	}

	va_end(arg);

	return (counter);
}
		






