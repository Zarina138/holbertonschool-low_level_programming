#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list task0;
	int i,sum;
	sum = 0;

	if (n == 0)
		return(0);
	va_start(task0,n);

	for (i=0; i<n;i++)
		sum+=va_arg(task0;int);
	va_end(task0);
	return(sum);
}
