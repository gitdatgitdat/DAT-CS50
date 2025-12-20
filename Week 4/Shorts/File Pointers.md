Reading and writing data to files is the primarily means to storing persistent data - That is, data that does not disappear when a program stops running.

The abstraction of files that C provides is implemented in a data structure known as FILE*.

fopen() - Open file and give a pointer to it. Good to check the return value to make sure it isn't NULL.
fclose() - Close the file pointed to by the given pointer.
fgetc() - Read and return the next character from the file pointed to. The operator of the file pointer passes must be "r"ead access or you will suffer an error.
fputc() - Writes or appends the specific character to the point-to file.
fread() - Reads units of size from the file pointed to and store them in a memory buffer.
fwrite() - Writes units of size to the file point to by reading them from a buffer.

All these live in stdio.h, all accpeint FILE*, excpt for fopen() which is used to get a file pointer in the first place.

FILE* ptr1 = fopen("example.txt", "r");

So this created ptr1 for the example.txt file, with "r"ead access. You can "w"rite and "a"ppend as well. Writing will overwrite data currently present, while append is for adding data at the end.

char ch;
while((ch = fgetc(ptr)) != EOF)
	printf("%c", ch);
	
So we're settin a variable, ch, as a character data type.
The while loop is having that variable, ch, equal to the first character in the file until it reaches the End Of the File (EOF).
We then print each character.
This is essentially the cat function in Linux systems.

You could also make a slight adjustment:

char ch;
while((ch = fgetc(ptr)) != EOF)
	fputc(ch, ptr);

Which now mimics the copy (cp) command, going through each character and either writing or appending it to the file.

Other good to know functions:

fgets() - Read a full string
fputs() - Write a full string
fprintf() - Writes a formatted string to a file
fseek() - Rewind or fast forward within a file
ftell() - Tells you what position (byte) you are within a file
feof() - Tells you whether you've read to the end of a file
ferror() - Indicates whether an error has occured while working with a file