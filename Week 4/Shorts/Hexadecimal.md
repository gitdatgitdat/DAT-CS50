We mostly use a decimal system, aka base 10.

0 1 2 3 4 5 6 7 8 9

And then we can combine those for larger digits, like 1 and 0 to make 10.

Binary, base 2, is only using 0 and 1. We can chain those together to represet 1 2 4 8 16 32 64 128 and 256.

Hexadecimal, base 16, is a much more concise way to express data on a computer system.

0 1 2 3 4 5 6 7 8 9 A B C D E F

This allows us to map a group of four bindary digits (bits) with 16 different combinations and each of those combinations make a single hexadecimal digit.

Decimal - Binary - Hexadecimal
0 - 0000 - 0x0
1 - 0001 - 0x1
2 - 0010 - 0x2
3 - 0011 - 0x3
4 - 0100 - 0x4
5 - 0101 - 0x5

The 0x is used to note that we're dealing wtih a Hexadecimal number to avoid and to avoid confusion with the decimal form.

When converting binary to Hexadecimal, you should start from the right and group the 1's and 0's into groups of 4. If you happen to have space at the end, feel free to add leading zeroes.

So this:

01000110101000101011100100111101

Becomes this:

0100 0110 1010 0010 1011 1001 0011 1101

Which breaks down into Hexadecimal as this:

4 6 A 2 B 9 3 D or 0x46A2B93D

Not only is this a more compact representation but also helps with memory allocation.