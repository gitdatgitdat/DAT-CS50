Hash tables combine the random access of an array with the dynamism of a linked lists. So we can insert, delete, and look up with near constant time while mitigating the disadvantages of arrays and lists. The trade off is that has tables are not great at ordering or sorting data. 

A hash table is a combination of two things:

Hash function: This return a nonnegative integer value to be used as a hash code.

Array: This is for storing data of the type we wish to place into that data structure.

We run the data through the hash function, and then it is assigned to the associated array based on the output value, or the hash code.

---

Defining a hash function

A good hash function should: 

Only use the data being hashed
Use all of the data being hashed
Be deterministic - We should get the same output every time
Uniformly disribute data
Generate very different hash code for very similar data

A basic example in code could be:

unsigned int hash(char* str)
{
	int sum = 0;
	for (int j = 0; str[j] != '\0'; j++)
	{
		sum += str[j];
	}
	return sum % HASH_MAX;
}

With that said, you're generally not going to write your own hash functions. Its more of an art rather than a science, and you can find good ones online (And bad ones! So be selective)

---

Collisions

If you have two pieces of data assigned the same hash value, this creates a collision. Either the newest piece of data won't be inserted or the older piece of data will be removed/overwritten.

You can use Linear Probing, which will check the next space avaiable and see if the new piece of data can go there. You're essentially adding +1 to the hash value and seeing if that spot is open.

But if its not, and we're moving multiple spaces until we find an open spot for the new piece of data, we're running into an issue called Clustering. The cluster will get worse and wrose until the array is filled or we risk losing older data.

To resolve this, we can use Chaining. This harkens back to linked lists. Instead of an array containing a piece of data, we can have it contain a pointer to a list that will continually grow as more insertions occur.