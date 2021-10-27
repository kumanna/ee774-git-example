#include <stdio.h>

int
is_perfect_number(int n)
{
	int sum = 0;
	for (int i = 1; i < n; ++i)
		if (n % i == 0)
			sum += i;
	return sum == n;
}

int
is_even(int i)
{
	return i % 2 == 0;
}

int
factorial(int n)
{
	int product = 1;
	for (int i = 1; i <= n; ++i)
		product *= i;
	return product;
}

int
main(int argc, char *argv[])
{
	int n = 7;
	printf("Factorial of %d is %d.\n", n, factorial(n));
	printf("%d is even? Answer: %s\n", n, is_even(n) ? "Yes" : "No");
	printf("%d is perfect? Answer: %s\n", n, is_perfect_number(n) ? "Yes" : "No");
	return 0;
}
