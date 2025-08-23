#include <stdio.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list task1;
    va_start(task1,n);

    if (separator == NULL)
        return;

    for (int i = 0; i < n; i++)
        printf("%s","%d",separator,va_arg(task1,int));
    printf("\n");
    va_end(task1);


}
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
