AGENDA

- Pointers

- File I/O

---

POINTERS 

Think of phonebook example. Whenm we store a piee of information, it is sent to a specific area of the memory and assigned an address in hexadecimal (0x123). If we wanted to use that address we could use:

int *p = 0x123

int * is the data type of pointer integer. The * indicates that we should "go to" the value at the address.

0x123 is the piece of information stored for our phonebook. But where is that stored? Well, that pointer would also be assigned a place in memeory and given its own address. The pointer of a pointer, if you would.

We can then take p and retrieve that address by using the &. Now this does come with some danger, as we are touching the system's memeory and may lead to issues such as memory leaks or overflows. But it does allow us to grab and manipulate files.

Lets go through another example:

int x = 4;

x is a box that contain's 4. The address to that box is 0x123. Lets define a pointer variable:

int *p = &x;

int * is a pointer integer, as we're grabbing a hexadecimal acting as an address in the memory, and storing it in p. The locatin is going to be at the address of x.

So now p is a box that contains the address 0x1233. It would have its own address. If we were to:

printf("%i\n", *p);

It would produce 4. It looked at the address in p, went to that address, and printed the store value. Similarly, if we did:

*p = 2;

The printf function would now produce 2. We went to the address stored in p, and changed its stored value to 2.

---

FILE I/O

Pointers really come in handy when it comes to file manipulation. You have commands like:

fopen - Open a file for reading/writing.
fclose - Close a file after use.
^- This is VERY important to do to avoid memory issues.

You may see this used like so:

FILE *input = fopen("hi.txt.", "r");

So we have FILE *

That's telling the system to go to the address of the file, in this case hi.txt. The "r", or read, access.

We also have:

fread - Read data from a file to a buffer.

fwrite - Write data from a buffer to a file.

Say we had a chunk of data in memory where a file lived and we wanted to process it into smaller blocks. We could use:

fread(buffer, 1, 4, input);

input is used to show where the file is.

1 determines the size of the blocks to read (In bytes).

4 determines how many blocks we want to read.

buffer is the location to store these blocks.

So when using fread, where are we putting the data? How many and what size? And from where are we getting that?

