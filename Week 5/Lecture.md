Last week on C!

... Also one of the most intensive weeks. Should level out after this.

Data structure is... exactly that! How do we structure data we're going to use? So far we have used arrays. There are some more abstract data types, both in life and in software.

For example, there are queues. These follow a first in, first out (FIFO) philosophy where the oldest element always drops first. Enqueue is used to add an element, while dequeue is used to remove an element. This may be represented in code as:

const int CAPACITY = 50;

typedef structure
{
	person people [CAPACITY];
	int size;
}
queue;

---

There are also stacks. These follow a last in, first out (LIFO) philosophy where the newest element is dropped first. While FIFO may seem more relevant in real life, FILO appears fairly often in software, such as an email inbox. Stacks use push to add to the stack, while pop is used to remove something. This may be represented in code as:

const int CAPACITY = 50;

typedef struct
{
	person people[CAPACITY];
	int size;
}
stack;

---

Linked Lists

So standard arrays are in a shared space in your memory and ending with a null value to express the end of the array. But what if instead each element on your array what randomly disributed across memory and then each element is tied together via pointers. This is the premise for linked lists.

Each individual element, or list, points to the next. There is then one extra pointer used to dictate which element is the start of the list. While this offers more flexibility than a standard array, it does take up more space overall.

In code, this may look like:

typedef struct node
{
	int number;
	struct node *next;
}
node;

---

Trees

So arrays are easy but not very flexible. Lists are very flexible but not very easy to code. This is where trees come in. Specifically we will be looking at binary search trees. In code, it may look like this:

typedef struct node
{
	int number;
	struct node *left;
	struct node *right;
}
node;

Now this is great! But what is the draw back? Well, this will now have twice the pointers for the left and right nodes. Now how we would search a tree like we've built?

bool search(node *tree, int number)
{
	if (tree == null
	{
		return false;
	}
	else if (number < tree=>number)
	{
		return search(tree->left, number)
	}
	else if (number > tree->number)
	{
		return search(tree->right, number);
	}
	else
	{
		return true;
	}
}

The trick with trees is they work great if everything is balanced correctly. But if we have one created that is unbalanced, it loses its functionality rather quickly. So how can we control this to make sure it stays balanced?

---

Hash Functions

Hashing is taking in one value and producing another based on characteristics of the original. By assigning a certain hash, we can assist our trees in staying balanced. This is becomes a Hash Table.

Say we recreated our phonebook app and used twenty six hashes, or buckets, for each letter in the name. This will work well until we have more than one contact that starts with the same letter. That will call collisions.

To work around this, we can create a linked list for that bucket. It would be created like this:

node *table[26];

Which is essentially creating pointers to 26 different linked lists. We define that struct like so:

typedef struct node
{
	char *name;
	char *number;
	struct node *next;
}
node;

This is very similar to our previous phonebook but now it has a third line to contain the address for the next node. But in this overly simplistic approach, we run the risk of collision and/or general inefficiency. But if a hash table is built cleverly, it can be a very effect means to manage data.

---

Tries

Lastly we have tries, which are like trees that connect arrays to other arrays. In our phonebook example, the first letter of your name would be in one array, which would link to another array that holds the second letter of your name, which would link... Well, you get the point until we end with an null to indicate the end of the inpoint.

While this has arrays built on arrays (So lots of memory used), the amount of time required to lookup, add, or remove someones name to this structure, it would be near constant and NOT dependent on n. The only controlling variable would be the length of the name being added. 

This in struct may look like this in code:

typedef struct node
{
	struct node *children[26];
	char *number;
}
node;