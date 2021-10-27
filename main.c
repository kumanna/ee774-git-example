#include <stdio.h>
#include <stdlib.h>

int
is_perfect_number(int n)
{
	int sum = 0;
	// Check all factors
	for (int i = 1; i < n / 2 + 1; ++i)
		if (n % i == 0)
			sum += i;
	return sum == n;
}

int
is_even(int i)
{
	// This will be optimized to bit comparison
	return i % 2 == 0;
}

int
factorial(int n)
{
	int product = 0;
	for (int i = 1; i <= n; ++i)
		product *= i;
	return product;
}

int
main(int argc, char *argv[])
{
	int n = 1;
	if (argc > 1)
		n = atoi(argv[1]);

	printf("Results:\n");
	printf("Factorial of %d is %d.\n", n, factorial(n));
	printf("%d is even? Answer: %s\n", n, is_even(n) ? "Yes" : "No");
	printf("%d is perfect? Answer: %s\n", n, is_perfect_number(n) ? "Yes" : "No");
	return 0;
}
