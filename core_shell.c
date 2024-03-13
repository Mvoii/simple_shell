#include "main.h"
/*
 * main - Entry point for the shell proram
 *
 * Description: servers as the entry point of the shell.
 * it displays a prompt, reads user input, executes the command,
 * and repeats the process until user exists teh shell.
 * 
 * Return: Always 0.
*/
int main(int __attribute__((unused)) argc, char **argv, char **env)
{
    char *line;
    char **args;
    int status;

    while(1)
    {
        printf("BroShell($) ");

        // read user using read
        // remove any anomalies
        // tokenize the input
        //execute command
    }
    return (0);
}