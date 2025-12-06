So we have decimal, or base 10, which is made up of

0 1 2 3 4 5 6 7 8 9

Then we have binary, or base 2, which is made up of 

0 1

This week we'll dive into hexadecimal, base 16, which is made up of

0 1 2 3 4 5 6 7 8 9 A B C D E F

This is commonly used with RGB and the color selected is based on a hexadecimal figure like:

FF0000 = Red
00FF00 = Green
0000FF = Blue
FFFFFF = White
000000 = Black

But lets go smaller and work with two digits:

Hexadecimal - Decimal

00 - 0
01 - 1
02 - 2
03 - 3
04 - 4
05 - 5
06 - 6
07 - 7
08 - 8
09 - 9
0A - 10
0B - 11
0C - 12
0D - 13
0E - 14
0F - 15
1F - 16
...
FF = 255

Why is this helpful? Well, due to it containing 16 hexadecimal can display a byte in two digits instead of eight. Although to avoid confusion, we do add a 0x to the start of any hexadecimal. So the chart above would actually be more correct as:

0x00
0x01
0x02
... etc

--- 

NEW SYNTAX!

& = 'Address of' operator. Where does this variable live?
* = Dereference operator. We take an address, and go there.
%p = Print pointers

What is a pointer? This is a variable that stores the address of something. From our addresses.c example:

int n = 50;
int *p = &n;

It can help to read this right to left. To start, we set 50 to the variable of n that's treated as an integer.
We are then taking n, finding its address (&) and setting that as a pointer (p) that will go to that address (*) and be treated as an integer.

NOTE: Conventionally, pointers are written as:

int *p = &n;

But you may see:

int* p = &n;

or

int * p = &n;

David says use:

int *p = &n;

So we're using that.

---

STRINGS

So C actually doesn't use 'string' as a data type. By using cs50.h we have been able to work around that, but we'd actually point at the start of the string in memory and run through the array until reaching null.

So instead of:

string s = "HI!";

We can remove the training wheels and put:

char *s = "HI!";

You're looking for the first character of a string via the pointer, and the function will run through until it reaches the end of that array.

If you prefer, you can even create your own struct with the same function:

typedef char *string;

This was essentially what cs50.h was doing as far as identifying string as a data type.

NOTE: Real world, you want be using char *. The other nerds will make fun of you otherwise.

---

MORE NEW SYNTAX

malloc = Memory allocation control that allows us to call for an address in memory.

free = Free up memory so you don't run out.

If we were trying to copy a string, you may see something like this:

	char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    for (int i = o, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }
	
Why not just do a simple s = string and t = s? The two variables are pointing at the same address. So not only if we change s will effect t, but changing t will effect s. Doing what we did above will allocate a new piece of memeory that's the same size and copy everything in s to t. Allowing us to manipulate t without impacting s.

Memory allocation is very important. We have tools we can use to assist in diagnosing problems when they occur. Such as:

Valgrind

If we wanted to check our memory.c program we would run:

valgrind  ./memory

And an output will be provided indicating if there are any memory leaks. It will be a lot to take in, but try to cipher through for tid bits that can help identify issues to be resolved.

---

Garbage Values