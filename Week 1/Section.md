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

