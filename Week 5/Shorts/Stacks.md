Stacks are a special type of strcuture that can be used to maintain data in an organized way.

This is commonly done in one of two ways - An array or linked list.

Either way, information is being STACKED on top of each other. Because of this only the most recent item can be removed. Think "Last in, First out". We refer to these as:

Push: Adding an item to the stack.
Pop: Removing an item, the most recent one, from the stack.

For example, an array based implementation may look like:

typedef struct _stack
{
	VALUE array(CAPACITY);
	int top;
}
stack;

Once done, we can use this like any other data type. Such as:

stack s;

We could then add an element to the top of the stack like so:

s.top = 0;

Which would make the top spot equal to [0].

---

PUSH

So how would we add a new element to the stack through the push() function? We need to provide a pointer and the data type. This would add the data to the top and then update the location of the new top. So it may look like:

void push(stack* s, VALUE data);

Or using our previous example:

push(&s, 28);

---

POP

This would remove the most recent element from the top of the stack by accepting a pointer to the stack, change the location of the top, and return the value that was removed. It may look like:

VALUE pop(stack* s);

Or using our example:

int x = pop(&s);

Which would set x to the most recently removed value. To be clear - This doesn't actually remove that value from the array. But it will change the new top, and if a new int was added to our array, the old value would be overwritten.

---

Linked List-Based Implementation 

typedef struct _stack
{
	VALUE val;
	struct _stack *next;
}
stack;

These behave similarly, but we'll need to point at the current top of the List before adding another or looking at the second element when removing. So we're always minipulating the top of the stack and can never manipulate the other layers first until the current element has been removed.