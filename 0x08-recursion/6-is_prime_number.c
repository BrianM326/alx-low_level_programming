#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Says if a number is prime or not
 * @n: the number to be checked
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	//int actual_prime(int n, int divisor);
	// Function definition
	int is_prime(int n) {
	return actual_prime(n, n - 1);
	}
	
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Calculates if number is prime recursively
 * @n: the number to be checked
 * @i: the iteration times
 * Return: 1if n is prime, 0 if not
 */
int actual_prim(int n, int i)
{
	if (n == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
