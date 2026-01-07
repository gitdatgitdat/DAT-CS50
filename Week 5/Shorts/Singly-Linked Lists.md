Arrays are great for element lookup but struggle when we want to insert or remote. This makes them inflexible. Through pointers, dynamic memory allocation and structs, we can put pieces together to develop a new kind of data structure that gives the ability to grow and shrink a collection of like values.

Singly Linked Lists is a set of nodes chained together. Each node contains the stored value and a pointer to the next node. In code, this may look like:

typedef struct sllist
{
	VALUE val;
	struct sllist* next;
}
sllnode;

Notice how there is sllist and sllnode. Fairly similar, but sllist must be used a temporary type name due to sllnode not being called until the end of the struct. We need this self-referental name during the creation process.

To use a single linked list we need to consider:

Create the linked list if it doesn't already
Search it to find an element
Insert a new node
Delete a old node
Delete the entire linked list

---

Creation could be done like so:

sllnode* create(6);

This references are example struct to create a new list with whatever value we set.

---

Now lets search through the list to find an element:

bool find(sllnode* head, VALUE val);

---

When adding a node, we may do something like:

sllnode* insert(sllnode* head, VALUE val);

Note that additons are put at the START of the list because linked lists depend on knowing the location of the end, or null point, of a list. So adding to the end becomes a problem. Where adding to the start is rather straight forward, the new element just needs to use the address of the element that previously was the start of the list. We can then update where to new start of the list begins. You need to do it in this order, otherwise you risk orphaning the other elements.

---

And finally, if we wanted to remove the entire list:

void destroy(sllnode* head);

By pointing at the head, we're essentially doing a form of recursion. We want to delete all the other attached nodes, and then delete the head, or start, of our linked list.

---

And what if we just want to remove a single element/node? Well, that's a little bit tricky. Knowing the start is important, as it chains to the rest of the nodes. The ending is also really important so the null point is known. Then anything in the middle could also caught orphaning of elements.

This is where doubly linked list prove advantageous, as we could go forward and backward through lists.