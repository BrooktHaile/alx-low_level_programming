#include <unistd.h>
Â#include "main.h"

/**
* _putchar - writes a character c ro stdout
*@c: The character to print
*Return: On sucess 1 else -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
