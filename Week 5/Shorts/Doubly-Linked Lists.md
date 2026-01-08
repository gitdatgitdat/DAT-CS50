Singly Linked Lists, by design, only go in one direction. This means removing a single node is difficult without risking orphaning part or all of the lists.

Doubly Linked Lists allow us to move forward and back through the list by having each node contain an additional pointer for the array that comes before and after it.

This doubles up memory cost, so it shouldn't be use by default. It may be represented in code like this:

typedef struct dllist
{
	VALUE val;
	struct dllist* prev;
	struct dllist* next;
}
dllnode;

---

To use Linked Lists you must be able to:

Create the list
Search the list
Insert a new node
Delete an old node
Delete the entire list

This is all very similar to how its done with singly linked lists. The key differences are with adding and removing nodes. We need to make sure the pointers before and after any changed nodes are updated correctly when completing this process.

To insert a new node we may see something like this:

dllnode* insert(dllnode* head,  VALUE val);

To remove an old node we may see soemthing like this:

void delete(dllnode* target);

Take note: This is for removinng a node from the middle of the list. Removing the beginning and end will require additional steps and will be covered later in the series. But otherwise the process of adding and removing nodes from linked lists is very efficient. However the tradeoff is we no longer are able access random elements like we can in standard arrays. So accessing a desired element may now take linear time. While you CAN organize linked lists, its not generally done and considered unneeded.