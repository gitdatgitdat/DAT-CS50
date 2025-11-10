Loops allow your programs to exectuve lines of code repeatedly, so you don't need to repeatedly use the same piece of code.

---

Forever Loops

while(True)
{

}

This is an infinite loop. The code will continue to repeat from top to bottom until we break out of it or kill the proram.

---

While Loops

while(boolean-expr)
{

}

If this evaluates to true, the code between the curly braces will be excecuted until its evaluated to to be false.

---

Do While Loops

Do
{

}
while(boolean-expr);

The code in the curly braces will be ran once, and if the boolean evaluates to true it will go back and repeat the process until its evaluated to false.

This means the code will always be ran at least once. Where a typical While loop may not run at all.

---

For Loops

for (int = 0, i < 10; i++)
{

}

This is used to repeat the body of the loop a specific number of times. The example is ten times. You set the counter variable, i, and the boolean expression is checked. The counter variable is incrementally increased by 1 each time. The loop will repeat until it reaches 10.

---

Which one?

While Loops are helpful when you don't know how many times the code will be run.

Do-While is similar but you always want the code to run at least once.

For Loops are when you want to repeat a discrete number of times. Though you may not know this number at the moment the program is compiled.

BE AWARE - These loops can be interchanged, its not set in stone. But these are their common use cases.

---

