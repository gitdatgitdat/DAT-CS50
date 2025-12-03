int collatz(int n)
{
	if (n == 1) // base case
		return 0;
	else if (n % 2 == 0) // even
		return 1 + collatz(n / 2);
	else // odd
		return 1 + collatz(3 * n + 1);
}