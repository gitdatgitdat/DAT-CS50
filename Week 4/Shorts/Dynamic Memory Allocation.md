What if we don't know how much memory we'll need at compile time? How do we access new memeory while a program is running?

This is where Dynamic Memory Allocation comes in! We can use pointers to get access to a block of memory at run time, which is formed dynamically from the heap. We get this by making a call via malloc, which will they return a pointer to that space in memory.

If it can't grab enough memory, it will return a NULL value.

Static assignment:
int x;

Dynamic assignment:
int *px = malloc(sizeof(int));

An issue to keep in mind is that dynamically allocated memory isn't automatically returned to the system. This can cause memory leak, which may compromise system performance. You must manually free this memory after its done being used.

char* word = malloc(50 * sizeof(char));

// do stuff with variable

free(word);

---

Three golden rules:

1 Every block of memory used by malloc must be free()do

2 Only memory that you malloc() should be free()do

3 Do not free() a block of memory more than once

int m;
int* a;
int* b = (malloc(sizeof(int));
a = &m;
a = b;
m = 10;
*b = m + 2
free(b);
*a = 11

int m is a box
int*a is a pointer
int*b is a pointer that has a box with memory allocated to the size of a currently undefined int. Essentially a box with no set value, yet.
a is now pointing at the address location of making
a is now equal to b, which is the memory allocated to the size of an unknown int.
m now equals 10, but a and b aren't looking at that box. So its really not impacting anything else.
The box b was pointing at now has the value of m + 2, or 10 + 2, so 12. This also means a is point at this box, and the value 12, as well.
We're done with b, so we free()d it.
However, a is stil pointing at that now free()d box. Setting it a to a new value can produce a variety of results.