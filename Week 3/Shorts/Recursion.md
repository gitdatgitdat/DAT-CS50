Recursion functions call themselves during execution. This is often viewed as "elegant" by those who code.

For example, factorial function is defined over all positive integers multiplied together.

fact(1) = 1
fact(2) = 2 * 1
fact(3) = 3 * 2 * 1

Another way to view this though is this:

fact(1) = 1
fact(2) = 2 * fact(1)
fact(3) = 3 * fact(2)

This has become an example of recursion. The trick with recursion is making sure you have a way to stop it. Otherwise it can quickly run wild - This is referred to as the base case.

The second requirement for a recursive implementation is the recursive case, which is where the recursion takes place. So in code this may look like:

int fact(int n)
{
	// Base case
	if (n == 1)
	{
		return 1;
	}

	// Recursive case
	else
	{
		return n * fact(n-1);
	}
}

Or more simply:

int fact(int n)
{
	if (n == 1)
		return 1;
	else
		return n * fact(n - 1);
}

Four lines of code to effectively determine the solution. Compared to a typical loop:

int fact(int n)
{
	int product = 1;
	whilte (n > 0)
	{
		product *= n;
		n--;
	}
	return product;
}

The recursive version is much cleaner, or elegant. So when it can be utilized, it is often the better option.

Keep in mind that its possible to have more than one base case and/or more than one recursive case. the Fibonacci number seequence has multiple base cases. The Collatz conjecture has multiple recursive cases.

The Fibonacci sequence is the sum of all previous parts, which would make up the multiple base cases. While the Collatz conjecture is the idea that it is always possible for a positive integer to get back to 1 by following these steps:

If n is 1, stop
Otherwise, if n is even, repeat this process on n/2
Otheriwse, if n is odd, repeat this process on 3n + 1

If n == 1, this is our base case. Then we have calls for if n is even or odd.

int collatz(int n)
{
	if (n == 1)
		return 1;
	else if n is even;
		return 1 + collatz(n / 2);
	else if n is odd
		return 1 + collatz(3 * n + 1);
}

int collatz(int n)
{
	if (n == 1) // base case
		return 0;
	else if (n % 2 == 0) // even
		return 1 + collatz(n / 2);
	else // odd
		return 1 + collatz(3 * n + 1);
}