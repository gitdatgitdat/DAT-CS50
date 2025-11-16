Arrays are a fundamental data structure that are extremely useful. They hold values of the same type at a contiguous memory location.

In C, elements of an array are indexed starting from 0. If an array consists of n elements, the first is located at index 0. The last element will then be located at the index(n - 1).

How is an array declared?

type name[size];

The type is what kind of variable each element of the array will be.
The name is what you want to call the array.
The size is how many elements you would like the array to contain.

int student_grades[40]

The type is integers.
The name is student_grades
The size is 40.

You can set the array one by one with:

bool truthtable[3]0;
truthtable[0] = false;
truthtable[1] = true;
truthtable[2] = true;

If you know all the elements beforehand, or are working with a large array, you could use this:

bool truthtable[3] = {false, true, true}

Arrays are not locked to a single dimension. You can have more than one size specified.

bool battleship[10][10];

This could be interpreted as a 10x10 grid of cells, which is helpful for game boards or other complex representations. But in memory, its really just a 100-element one dimension array.

While you can treat individual elements of an array as variables, you cannot treat entire arrays themselves as variables. For example, you can't copy one array to another. You would need to use a for loop to complete that task.

int foo[5] = { 1, 2, 3, 4, 5};
int bar[5];

for(int j = 0; j < 5; j++)
{
	bar[j] = foo[j];
}

---

Keep in mind that while most variables in C are passed by value, as in a copy of that value to be used locally.

Arrays are not treated this way. They are passed by reference, meaning the function is receiving the actual array itself. Not a copy.

This will go in further depth, but a good distinction to keep in mind.

