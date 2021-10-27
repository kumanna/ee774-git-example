#include <stdio.h>

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
	int n = 6;
	printf("Factorial of %d is %d.\n", n, factorial(n));
	printf("%d is even? Answer: %s\n", n, is_even(n) ? "Yes" : "No");
	return 0;
}
