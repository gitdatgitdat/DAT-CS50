- Algorithms

Searching

Linear search refers to looking at each element one by one. Eventually works, but given a large enough data set this is going to take a significant amount of itme.

Binary search refers to searching through a sorted list, say alphabetical or by numeric size. We then divide an conquer. Start in the middle and, if this isn't the solution, is the answer before or after? We now have half the option and repeat again until we find what we're looking for.

To determine the efficiency of our search option, we consider Runtime Analysis. This focuses on the worst and best case for the number of steps it takes before the search strategy finds the answer.

---

Sorting

We covered a few sorting Algorithms in lecture:

Merge: We break down the list and the create the correct order as its reconstructed.

Selection: We select the smallest number and move it to the bottom.

Bubble: We select the largest number and move it to the top.

Merge is going to be fastest with unsorted data. While Bubble will be fastest when its data that's already sorted. Selection does roughly the same with sorted and unsorted.

If we wanted to see how quickly it takes data to be sorted in C, you could run:

time ./sortingalgo filetobesorted

---

Structures

We can make our own data type by created a structure, or struct. For example:

typedef struct
{
	string name;
	int votes;
}
canidate;

This combined two elements, the name and votes, into canidate. This will keep the data more organized than if these were two seperate variables. Say we wanted to manipulate one of those elements, we may use:

canidate president;

president.name = "Alice";
president.votes = 10;

But what if we have multiple canidates? We'd need to use an array. In this case we'd use:

candiates[0];

Which would get the first element, Alice and 10. But if you wanted to just get the name, you could enter:

canidates[0].name;

We used the structs.c for an exercise that:

Creates an array of three canidates
Populate an array using user input
Search the array to find the most voted canidate

---

Recursion

Recurision can be an intimidating concept to think of, as you're giving a lot of control to the machine. If configured incorrectly, the machine can quickly spin out of control. A good way to visualize recrusion is with Factorial:

1! = 1
2! = 1 * 2
3! = 1 * 2 * 3
4! = 1 * 2 * 3 * 4

The build blocks are all very similar, which lends itself to a recursive answer if we're to build this in code. For example:

f(4)
	4 * f(3)
		3 * f(2)
			2 * f(1)
				1 * f(0)
				
The bottom line is going to be 1. Meaning if we take that product, and use it to solve the layer about it.

Loops and recursions can take a similar role. But when there are recursive characteristics, recursion is often simpler to construct and faster in execution.