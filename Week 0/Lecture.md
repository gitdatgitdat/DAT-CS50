The study of information:

How do you represent it? And how do you process it?

Computers go by on and off, or 1s and 0s due to running off transitors that are either on or off. This is represented as a bit.

0 = 0
1 = 1

If we use bytes, 8 bits, we can represent up to 255 (If we don't include 0).

1, 2, 4, 8, 16, 32, 64, 128, 255

128 64 32 16 8 4 2 1

0000 0000 = 0
0000 0001 = 1
0000 0010 = 2
0000 0011 = 3
0000 0100 = 4
...
1111 1111 = 255

So how do we get letters? Assign them to a certain pattern.

A = 0100 0001 = 65
B = 0100 0010 = 66

Why didn't we start at 0000 0000? Bunch of a nerds in a room years ago decided so.
- More serious answer, the first 64 are used for commmands, identification, and symbols.

0 = 0000 0000 = Null
1 = 0000 0001 = Start of heading
2 = 0000 0010 = Start of text

For languages that have more characters, they may use 16 or 32 bits. Emojis are also represented in this way.

How is color interpreted by a computer? RGB = Red, Green, Blue. Each is assigned a value from one byte (0 to 255) which dictates the amount each is combined to represent a specific color.

72, 73, 33 = Yellow

How do you represent sound? Similar to color, we assign multiple bytes to the note, pitch, volume, instrument... etc. This is then interpreted by the computer through the use of software to produce that sound.

This is also considered "low level" code. Most of this course will be on "higher level", such as C.