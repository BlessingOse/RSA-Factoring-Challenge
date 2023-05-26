#include <stdio.h>

/**
  * is_prime - prime
  * @num: num
  *
  * Return: 1
  */

int is_prime(int num)
{
	if (num <= 1)
	{
		return (0);
	}

	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}

	return (1);
}

/**
  * find_prime_factors - to find prime
  * @n: int
  */

void find_prime_factors(int n)
{
	printf("Prime factors of %d: ", n);

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0 && is_prime(i))
		{
			printf("%d ", i);
		}
	}

	printf("\n");
}

/**
  * main - entrypoint
  * Return: 0
  */

int main(void)
{
	int n = 1234567; /*Replace with the given number*/

	find_prime_factors(n);

	return (0);
}
