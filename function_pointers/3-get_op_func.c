#include "3-calc.h"
#include <stddef.h>
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal, non-zero otherwise
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}

/**
 * get_op_func - selects the correct function to perform operation
 * @s: operator passed as argument
 *
 * Return: pointer to the function that corresponds to operator
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op != NULL)
    {
        if (_strcmp(ops[i].op, s) == 0)
            return (ops[i].f);
        i++;
    }
    return (NULL);
}
