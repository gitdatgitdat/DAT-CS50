Agenda

Data Structs: What are the trade offs?
Linked Lists: What are the primary opeartors we need to know how to do?
Hash Tables: How do we build this?

---

Choosing Data Structures

The key factors we consider when choosing a strcture is deletion, insertion, and search.

Will we be adding and/or removing elements frequently? Or is being able to search for an element a priority? How we rank these will determine the type of structure we should use.

Size is another factor. Tries are generally considered to work in constant time, but will often take up the most space. Arrays can take the most time, but can be relatively small.

---

Linked List

typedef struct node
{
	string phrase;
	struct node *next;
}
node;

// This creates the struct for us to use

node *list = NULL;

// We have now created the list, which simply points at null. Because nothing has been added to the list yet.

node *n = malloc(sizeof(node));
n->phrase = "Hi!";

// We have now allocated memory for our first node and then set our first element, the string "Hi!".

list = n;

// This new element is now the head of our list, now replacing NULL.

See linked list.c for a full overview of creating a linked list.

---

