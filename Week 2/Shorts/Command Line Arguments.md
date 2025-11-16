These allow us to provide data, or arguments, from the command line.

To do so, we need to change how we set int main.

Previously its largely been int main(void)

Now we may add int main (int argc, string argv[])

---

argc (ARGument Count) is an integer type varialbe that will store the number of command line arguemnts the user typed when the program is executed.

./greedy is an argc of 1.

./greedy 1024 cs50 is an argc of 3

So the program itself will count as 1, and incrementally go up from there.

---

argv (ARGument Vector) is an array that stores strings, one string per element, the actual text the user typed at the command line when the program was executed.

The first element of argv is always argv[0]. The last element of argv is always found at argv[argc - 1]

Remember that whatever is stored in this array is an array. So in our previous example:

./greedy 1024 cs50

1024 may appear as an int, but its being stored as a string. 

Spoiler - There is a function to convert this to an integer that will be covered in the future.

