Covering Varialbes, Opeartors, Functions, Loops, and Problem Set 1

- Varialbes

Calls: Using the phone call example, imagine the number of times your friend calls you. If it was 4 times it would like like:

int calls = 4;

int is the type
name is Calls
= is the assignment operator
4 is the value

This is creating an integer named calls that gets the value of 4.

What if that value changes? My friend calls me a 5th time. We can reassign by:

calls = 5;

So we just have the name, assignment operator, and value. You could also do something like:

calls = calls - 1;
calls = calls * 2;
calls = calls++;

What if we want to get the number from the user?

int calls = get_int("Calls: ");

So we're still using the int type, the name calls, = as the operator.
But instead of a value we're using get_int
This function that is defined in the CS50 library. When run, it will create a prompt that will then be used as our value.

- Printing Values

So we have a value from the user. How do we use it now?

printf("calls equals %i", calls);

the %i represents a placeholder for that value. The calls at the end specifies where to get that value from.

You may see %d for integers as well, but this has been depreciated for some time. Other types and format codes include:

float %f
char %c
string %s
booleon %i

- Loops and Conditionals

if (calls < 1)
{
	printf("Call more often!");
}

This loop is based on the boolean expression, calls < 1. So if you have called your mom less than onces, the conditional if kicks off the conditional code, printing "Call more often!". You can also include an 'else' to take care of other options. Such as:

else
{
	printf("Thanks for calling!");
}

We then have Loops. Starting with while:

int i = 0;
while (i < 2)
{
	printf("%i\n", i);
	i = i + 1;
}

We have the initialization, where we set the variable i to zero. This variable helps us do the right number of repeitions or loops. There's then the boolean expresion, in this case if i is less than 2. 

Since i = 0, the number is printed. Then i + 1 occurs, so we now have i = 1. We go back to the top. Since i is still less than 2, the number is printed again and i + 1 is ran again. i now equals 2, which then breaks the while loop.

There are then For loops:

for (int i = 0; i < 2; i++)
{
	printf("%i\n", i);
}

This serves the same function as before. i is set to zero, and if it is less than two, we incrementally increase it by 1. While less than 2, the number is printed. Once it isn't, the loop stops.

So when use while vs for? It depends on what you're trying to accomplish. From above, we can see they can both serve the same function. For loops are often when you know the number of steps you're going to take. While loops are often more fluid and helpful when you don't know the exact amount of steps that may occur.

