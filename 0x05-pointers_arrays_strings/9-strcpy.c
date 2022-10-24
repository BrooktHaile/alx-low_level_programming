#include "main.h"
/**
*_strcpy - copies a string from source to destination
*@dest: destination
*@src: source
*Return: string
*/
char *_strcpy(char *dest, char *src)
{
int len = 0;
while (*(src + len) != '\0')
{
*(des + len) = *(src + len);
