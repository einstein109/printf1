#include <unistd.h>
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - writes out the string input to stdout
 * @str: the string inputed into the function.
 * 
 * Return: always return 0 on success.
 */
int _puts(char *str)
{
    int i;
    
    for (i = 0; str[i]!= '\0'; i++)
        _putchar(str[i]);
    return (0);
}

/**
 * convert - converter a data set to the right format
 * @base: the base to convert the number to.
 *
 * Return: a string of the formatted data.
 */
char *convert(char hexa_dec[], unsigned int num, int base)
{
	static char buffer[50];
	char *ptr;
	int position = 0;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{	
		position = num % base;
		*--ptr = hexa_dec[position];
		num /= base;
	}while(num != 0);

	return(ptr);
}
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@s: pointer char
 *Return: int length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
