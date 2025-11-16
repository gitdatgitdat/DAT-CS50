Functions, also known as procedures, methods, and/or subroutines, is a black box with a set of 0+ inputs and 1 output.

You could have something like: 

add(a, b, c)

Which is taking three inputs, adds them together, and 1 output which is their sum.

Why the term black box? We may not be using functions we wrote ourselves at times. In which case, we don't know how that function works. Just that it completes the job we need it for. All the more reason functions should have clear, relatively obvious names that are well documented.

---

When declaring a function, its common to place it at the top of your code. It will likely look like this:

return-type name(argument-list);

return-type is what kind of variable the function will output.

name is what you call the function. Likely least important when it comes to functionality, but in reality it may become one of the most important as far as identifying what the function does.

argument-list is the comma-seperated set of inputs to your function, each of which has a type and a name.

---

For example:

int add_two_ints(int a, int b);

This function will add two integers together, which will also be an int itself.

This is named appropraitely.

There are two inputs and we should give them a name for the purposes of the function.

---

Once the function is declared, it then needs to be defined. 

float multi_two_floats(float a, float b);

float multi_two_floats(float a, float b)
{
	float product = a * y;
	return product;
}

Note how the definition looks the same as the declaration, minus the semicolon and the addition of the curly brackets.

int add_two_ints(int a, int b);

int add_two_ints(int a, int b)
{
	int sum = a + b;
	return sum;
}

int add_two_ints(int a, int b);

int add_two_ints(int a, int b)
{
	int sum = 0;
	if (a > 0)
		for(int i = 0; i < a; sum++, i++);
	else
		for(int i = a; i < 0; sum--, i++);
	if (b > 0)
		for(int i = 0; i < b; sum++, i++);
	else
		for(int i = b; i < 0; sum--; i++);
	return sum;
}

---

Now the function is ready to use. It just needs to be called and passed an appropriate argument.

---

Practice:

boolean valid_triangle(float a, float b, float c);

boolean valid_triangle(float a, float b, float c)
{
	if(a + b > c && a + c > b && b + c > a);
		return true;
	else
		return false;
}