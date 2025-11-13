Agenda

- Arrays
- Strings
- Command Line Arguemnts (CLI)

---

Arrays

Every array will have a name, size, and type. Say you wanted to log how many hours you're sleeping each day:

int hours[7];
type name[size];

While they can be dynamically sized, for now they will need to be fixed. They also need to all be the same type.

Reminder - This is zero indexed. So our list of 7 would go from hours[0] through [6].

When setting one of these spots, you may run something like this:

hours[0] = 7;

So the first night of the week, I logged 7 hours of sleep. But if I knew all hours I slept each night that week I could also use this:

int hours[7] = {7, 8, 9, 7, 6, 7, 8};

Reminder - These are similar to a list in python but they are slightly different data structures.

---

Strings

We often interpret strings as words or phrases. But to a computer, you're breaking down each character into a cell. Not dissimilar to an array but with characters instead of integers.

The word 'Hello' would be an array of five, or from 0 to 4. However for strings, there is a nul character (/0) in the following cell to note the end.

You can access each letter in the string similar to each integer in an array. For 'Hello', if:

word = Hello

word[0] would be H.
word[1] would be e.

And so on, with word[5] being nul to signifity the end of the string.

The computer runs on numbers. To denote each character its going to use ASCII. In the case of Hello, it would end up being:

word[0] = 72
word[1] = 101
word[2] = 108
word[3] = 108
word[4] = 111
word[5] = 0

Spoiler - Strings aren't actually a data type. This will be reviewed in the coming weeks. But for now we're treating them as such.

Hint - When working with sentences, using spaces as a seperater can be helpful.