A queue is a special type of structure that can be used to maintain data in an organized way. This is often done as an array or a linked list.

The important rule when dealing with queues, is new items are tacked onto the end and only the element at the front can be removed.

First in First out

Where another type of structure, stacks, go by last in first out. 

An array based implementation may look like:

typedef struct _queue
{
	VALUE array{CAPACITY];
	int front;
	int size;
}
queue;

We can then use this struct like so:

queue q;

Assiging this queue as... q. So if we:

q.front = 0;
q.size = 0;

---

Enqueue(): Add a new element at the end of the queue.

enqueue(&q, 28);

So we're pointing at the address of q, and adding 28 to the front. If we then added another:

enqueue(&q, 33);

We add 33 to the queue. But 28 is still the front. All we're tracking is what's coming after.

---

Dequeue(): Remove the oldest element from the front of the queue.

int x = dequeue(&q);

This would remove the first element we put in the queue, which in our example would be 28. The front would then be updated.

---

Linked List Model

A Linked list-based implementation may look like this:

typedef struct _queue
{
	VALUE val;
	struct _queue *prev;
	struct _queue *next;
}
queue;

When working with linked lists, you'll want pointers to the head and tail of the list. Probably as global variables.