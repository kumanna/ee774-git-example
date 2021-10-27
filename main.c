#include <stdio.h>

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
	int n = 4;
	printf("Factorial of %d is %d.\n", n, factorial(n));
	return 0;
}
