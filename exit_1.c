#include "main.h"

/*
 * validNumber - checks if string is a valid number
 * @s: string to check
 * Return: 0 if valid, 1 if not
 */
int validNumber(char *s)
{
    int i;

    for (i = 0; s[i]; i++)
    {
        if (s[i] < '0' || s[i] > '9')
            return (1);
    }
    return (0);
}