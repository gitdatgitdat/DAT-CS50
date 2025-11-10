These allow programs to make decisions and take different forks in the road dpeending on values of variables or user input.

if (boolean-expression)
{

}

If the boolean-expression was true, the code in the curly braces would be run. But if false, the code is not run.

You can build on that with else:

if (boolean-expression)
{

}
else
{

}

This provides a catch all. If true, run the code in the first set of curly braces. False? Run the second set of curly braces.

You can also do else if for an even longer chain.

if (boolean-expression)
{
//Branch 1
}
else if (bool-exp2)
{
//Branch 2
}
else if (bool-exp3)
{
//Branch 3
}
else
{
//Branch 4
}

Just realize you can only through one branch. They are mutually exclusive. If you didn't want to be exclusive you can use more if's:

if (boolean-expression)
{
//Branch 1
}
if (bool-exp2)
{
//Branch 2
}
if (bool-exp3)
{
//Branch 3
}
else
{
//Branch 4
}

This would only make branch 3 and 4 exclusive, as the else grabs on to the nearest if, so bool-exp3.

---

Here's a new conditional - switch

int x = GetInt();
switch(x)
{
	case 1:
		printf("One!\n");
		break;
	case 2:
		printf("Two!\n");
		break;
	case 3:
		printf("Three!\n");
		break;
	default:
		printf("Sorry!\n");
		break;	
}

GetInt is apart of the CS50 library. It would take that number and then print out that number as long as its from one to three. Otherwise it simply states "Sorry!"

Remmber to insert a break if you don't want the other casees to be read out. But there maybe times you DO want that:

int x = GetInt();
switch(x)
{
	case 5:
		printf("Five!\n");
	case 4:
		printf("Four!\n");
	case 3:
		printf("Three!\n");
	case 2:
		printf("Two!\n");
	case 1:
		printf("One!\n");	
	default:
		printf("Blast off!\n");
}

If the user provided 4, it would then run through cases 3 to default. This isn't normally how this is used, but good to keep in mind.

---

Ternary Operator

Often just a cute trick but can be useful to writing shorter conditional branches. Not mandatory but may be helpful to know. 

This should look familiar:

int x = GetInt();
if (expr)
{
	x = 5;
}
else
{ 
	x = 6;
}

If x true, x = 5, else x = 6. This can be shortened to:

int x = (expr) ? 5 : 6;

If the expression is true, use the first value. Otherwise, use the value after the colon. In this case 6.
Ideal for quick decisions. One thing or the other.

