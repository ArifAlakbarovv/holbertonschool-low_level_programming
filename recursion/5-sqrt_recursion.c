#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 */

#include "main.h"

/**
 * power_operation - Helper function to find square root recursively.
 * @n: Input number.
 * @c: Iterator.
 * Return: Square root if found, -1 otherwise.
 */
int power_operation(int n, int c) {
    if (c * c == n)
        return c;
    if (c * c > n)
        return -1;
    return power_operation(n, c + 1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Input number.
 * Return: Square root if found, -1 if negative, or natural square root.
 */
int _sqrt_recursion(int n) {
    if (n < 0)
        return -1;
    return power_operation(n, 0);
}


/**int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
/**int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
*/
