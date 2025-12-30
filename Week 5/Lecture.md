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

Whether you want to use a queue or stack just depends on the context of your goal or objective.