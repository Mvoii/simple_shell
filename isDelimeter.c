#include "main.h"

/*
 * isDelimeter - checks if character is a delimeter
 * @c: character to check
 * Return: 1 if delimeter, 0 if not
*/
int isDelimeter(char c)
{
    if (c == ' ' || c == '\n' || c == '\t' || c == '\0')
        return (1);
    return (0);
}