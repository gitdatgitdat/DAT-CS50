Modern languages will often not have data types. Once declared, you're good to go.

C is older and must have this specified.

---

int = Used to store integers. These always take 4 bytes (32 bits) of memory. So there is a limit to the size of integers that can be held. This range -2^31 to 2^31, minus one spot for 0. So around 4 billion options.

There are also unsigned integers. This doubles the amount of positive integers but you give up any negative values.

There are other qualifiers like short, long, and const. Only const is likely to appear later in the course, while short and long may not.

---

char = Data type that is used for variables to store a single charcter. Takes up 1 byte (8 bits) of memeory. ASCII developed a matpping of characters in the positive end of this range (-128 to 127).

---

float = Numbers with a decimal point. Also known as real numbers. These take up 4 bytes (32 bits) of memory. There's not an exact range but rather how precise they can be.

---

double = Data type for variables that store floating-point values, similar to float but it has double the precision. They take up 8 bytes (64 bits) of memory.

floats will usually work in this course but its good to keep in mind.

---

void = A type BUT not a DATA type. Functions can use this when they don't return a value. For now, think of it as a placeholder for nothing.

For example, we've been using int main(void)

This means the main doesn't take any arguments. It can, but for now we haven't needed it to.

---

There are two more data types provided by the CS50 library.

bool = Used for variables that store a boolean value (true or false)

string = Used for variables that store a series of characters. Such as words, sentences, paragraphs... etc.

--

Later on we'll learn about structures (structs) and defined types (typedefs) that offer a greater amount of flexiblity. You can even combine different kinds of data types to suit the needs of your program.

---

To create a varialble, it needs a type and name. Slap a semicolon on it and you're ready to go.

int number;
char letter;

We now have number, an int, and letter, a character. You can also create multiple variable of the same type:

int height, width;
float sqrt2, sqrt3;

Its conisdered good practice to only declare variables when you need them. This ties into scope and means you don't necessarily need to declare them all at the beginning of your program.

---

When using a variable, once it has been declared you no longer need to specify its type. For example:

int number; //declaration
number = 17; //assignment

You can even consolidate this into one line:

int number = 17; //initialization