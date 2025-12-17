Pointers provide an laternative way to pass data between functions. So far we have been passing data by value. Meaning we are only using a copy of that data. 

Using pointers allows us to pass the actual variable itself. So the impact of one function can change what happens in a different function!

At its core, pointers refer to the address of data that currently exists in the computer's memory.

So if we have:

int k;
k = 5;
int* pk;
pk = &k;

We created a box called k that stores an int.
k contains the int 5.
We created a box called pk that stores a pointer.
pk contains the address of k, which is a hexadecimal figure.

Use in this context, * is known as the dereference operator.
It "goes to" the reference and accesses the data at that location in memory. Think like visiting your neighbor at his home.

Say we didn't set pk to &k though. Its best practice to set it to null (== NULL). It will likely cause a Segment Fault error to occur but that does tell you the kind of error you're dealing with. With memory, we would rather be careful and have it point to nothing than risk affecting other areas of the system.

One more annoying aspect to consider is when declaring multiple pointers like this:

int* px, py, pz;

You may think you just got three pointers. However you actually have one pointer and two variables. You should rather set it like this:

int* pa, *pb, *pc;

... Or you could always declare each one on its own line.
 