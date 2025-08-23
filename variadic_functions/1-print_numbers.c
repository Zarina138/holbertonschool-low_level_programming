#include <stdio.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;	
    va_list task1;
    va_start(task1,n);

    for (i = 0; i < n; i++)
    {
	    if (*seperator != NULL && i > 0)
	    {
		    printf("%s", seperator);
		    printf("%d",va_arg(task1,int));
	    }
	    else
		    printf("%d", va_arg(task1,int));
    }
    printf("\n");
    va_end(task1);
}
