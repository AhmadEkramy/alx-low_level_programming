#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all paramters
 * @n: number
 * @...: variable number to cal sum
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
