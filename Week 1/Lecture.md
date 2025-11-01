Week 1 - C

Source Code: The semi english text input for programming.

Machine Code: The 1's and 0's the machine actually reads to complete actions and commands.

Compiler: The agent that takes source code and translate it to machine code. So we don't have to speak in 1's and 0's to give a computer commands.

This week the compiler we'll be using is C. Some basic command:

code hello.c - The creation of a file in c. In this case the file is called hello.

make hello.c - Taking a file and run it through the compiler to create the program*

./hello - Run our newly compiled code.

* - Apparently this is a white lie but for current purposes that's how we're explaining this process

ls - List contents of current directory.

\n - Line break, or start a new line.

\r - Move cursor to begin of the line.

\" + \' - How to actually produce quotations in code without it being interpretated as otherwise by the computer.

libraries - Collection of code that can be included and accessed by your code. This course used stdio.h for access to the print function (printf)*

* - Its not studio.io. Its standard io, or stdio for short.

For this course, we'll be using the cs50.h library for some functions that offer some simplicity when beginning with C.

Remember when making changes to your source code, its going to need to be recompiled to update the program.

We've dealt with strings ($s) so far, which is text. There are other types of inputs. Such as:

int - Integer. Round number. Represented by %i

We then have operators:

== : Equals

>= : Greater than or equal to

<= : Less than or equal to

!= : Not equal to

Lastly there will be variables. This is something we can set (int counter = 0;) and then reference it later.

Maybe you want to add increments to that variable (counter). We could:

counter = counter + 1;

Seems a bit odd logically, so you could also:

counter += 1;

This is so common there's even:

counter++ 

Or for subtraction:

counter--

This is only for value of 1 however.

char: This is used to store data in a single charcter, such as a letter, digit, or symbol.

booleons: True or false statements. You may see 'or' as || and 'and' as &&

As you build out your code and adding various functions, its often common to have your main at the top. But if there are variables needed to be referenced, you need to give the compiler a 'hint' that variable will appear later. For example:

#include <cs50.h>
#include <stdio.h>

void meow(int n);

int main(void)
{
    int n = get_int("Number: ");
    meow(n);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

You just need to use the first line, which gives this machine the heads up.

Its worth nothing in the cat example that n is being used multiple times. This runs but can cause some confusion as far as scope and ensuring varialbes are references throughout the source code as needed. You could adjust it to:

#include <cs50.h>
#include <stdio.h>

void meow(int n);

int main(void)
{
    int n = get_int("Number: ");
    meow(n);
}

void meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("meow\n");
    }
}

This ties into the three key areas of coding.

Correctness - Does it work?

Design - Is the design sound? Think of this like getting feedback on an essay. It may work, but it may not be designed well.

Style - This is one step further from design, where style preferences may vary from person to person (tabs vs spaces) or organization to organizaton. CS50 has a style and design50 tool in their dev environment that you can use.

Additionally, especially when working in groups or as a remidner to yourself, you can add comments with a '//'. This has no functionality for the computer but provides human readable notes to act as a reminder or instruction on why the code is the way it is.

When playing with our calculator applicaiton, we ran out of bits (i = 32 bits) and we eventually started returning 0. This can be worked around by using 'long' and substituting i with li (integer to long intetger). This uses 64 bits, giving us much more head room. But even that can run out!

There have been cases, such as Boeing and Pacman, where they needed to use more bits. We can utilize larger integers that will take 128, 256... etc.