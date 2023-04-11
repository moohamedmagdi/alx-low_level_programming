#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - argument
 *@ac: number of arguments
 *@av: arguments
 *
 * Return: new strn
 */
char *argstostr(int ac, char **av)
{
        int x;
        int y;
        int z;
        int ex;
        char *p = NULL;

        k = 0;
        ex = 0;
        if (ac == 0 || av == NULL)
                return (NULL);
        for (x = 0; x < ac; x++)
        {
                for (y = 0; av[x][y] != '\0'; y++)
                {
                        ex++;
                }
        }

        p = (char *)malloc(ex + ac + 1 * sizeof(char));
        if (p == NULL)
                return (NULL);
        for (x = 0; x < ac; x++)
        {
                for (y = 0; av[x][y] != '\0'; y++)
                {
                        p[z] = av[x][y];
                        z++;
                }
                p[z] = '\n';
                z++;
        }
        p[z] = '\0';
        return (p);
}
