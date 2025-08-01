#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value.
 */
int _atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    int digit_found = 0;

    while (s[i])
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] == '+')
            sign *= 1;
        else if (s[i] >= '0' && s[i] <= '9')
        {
            int digit = s[i] - '0';

            if (result > (2147483647 - digit) / 10)
            {
                if (sign == 1)
                    return (2147483647);
                else
                    return (-2147483648);
            }

            digit_found = 1;
            result = result * 10 + digit;
        }
        else if (digit_found)
            break;
        i++;
    }

    return (sign * result);
}
