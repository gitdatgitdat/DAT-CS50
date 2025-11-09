In order to manipulate and work with variables, you use operators.

Add = +
Subtract = -
Multiple = *
Divide = /
Modulus* = %

Modulus is similar to Divide, but provides the remainder. Think long division.

int m = 13 % 4
m = 1

You can also shorthand these.

x = x * 5;

becomes

x *= 5;

This is similar to increasing or decreasing a variable by 1.

x++;
x--;

---

There are then booleon expressions - True or False.

This can be used in branching or whether or not a loop should continue to run.

In C, you can use any nonzero value to represent true, and zero is always false. So you don't have to use the strict True or False expressions.

You have two types: Logical and Relational.

Logical operators can be in the AND or OR variety.

AND (&&) is only true when both operands are true.

x + y = x && y
True + True = True
True + False = False
False + True = False
False + False = False

Where OR (||) is true if at least one operand is true.

x + y = x || y
True + True = True
True + False = True
False + True = True
False + False = False

There is also NOT (!) which inverts the value of its operand.

x = !x
True = False
False = True

Relational operators behave to note if one operand is greater, lesser, and/or equal to another.

x < y
x <= y
x > y
x >= y

You can also test for equality and inequality

x == y
x != y

But be careful! Its common to use = instead of ==. = is for assignments. You want to use == for equality tests.

