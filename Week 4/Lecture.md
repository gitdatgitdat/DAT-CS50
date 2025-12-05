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

New Syntax!

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