#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list task0;

	if (n == 0)
		return(0);
	va_start(task0,n);

	for (i=0; i<=n;i++)
		sum+=va_args(task0,int);
	va_end(task0);
	return(sum);
}
