When building a program, we're going through four steps.

Preproccessing
Before processing, does it need to acknlowedge any prototypes that were included?
stdio.h, cs50.h

Compiling
Converting your source code to assembly for lower level communication.

Assembling
Converting your assembly code to machine code, 1's and 0's.

Linking
Taking all the associated files and ensure communication is occuring so the program is now ready to run.

What about decompiling? If you have a program you want to reverse engineer, can you see the parts that make up the sum? 

Kind of... The more complicated and elaborate the program, the harder it becomes and its likely easier to just build your own version. Although some languages, like java and HTML, are never compiled into 1's and 0's. So they're incredibly easy to see how they're built.

---

Debugging

Sometimes its best to just talk it out, sound out your confusion, which may make the problem apparent. But as your programs get more complicated, you may need more tools than that.

printf is one of the most commonly used to see what the computer is currently holding onto through the process of running your code.

#include <stdio.h>

int main(void)
{
	for (int i = 0; i <= 3; i++)
	{
		printf("i is %i\n", i);
		printf("#\n");
	}
}

The example above would help identify why the program is printing four #'s instead of three.

This can be cumbersome over time, especially if you have a large program and you've had several printf's throughout. Instead you can use debug50. If we were to use it on the example above:

debug50 ./mario

For this to work, you'll need to add a break ppint. This is a red dot you'll need to add to the source code. This indicates where you want debug50 to stop and let you poke around stey by step.

---

Arrays

Sequence of values back to back, or continous, in memory. They need to be the same type. Say I wanted a list of three integers:

int scores[3]

Make sure to keep in mind that we're using square brackets for this. To then add to this list you would use:

scores[0] = 72;
scores[1] = 73;
scores[2] = 33;
