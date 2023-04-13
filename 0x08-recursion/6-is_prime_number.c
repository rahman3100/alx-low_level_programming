#include "main.h"
/*
 * a function that prints prime input integers
 * return 1 if it is a prime number or otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (-1);
	return (actual_prime(n, n - 1));







}
