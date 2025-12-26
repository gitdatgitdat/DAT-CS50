We hae four different ways to store sets of data:

Arrays
Linked Lists
Hash Tables
Tries

There are even variations on these (Trees, heaps, stacks, queues...) but we'll predominately focus on these four and when you should try to use them depending on the data you are handling.

---

Arrays

Insertion is bad - Lots of shifting to fit an element into the middle
Deletion is bad - Lots of shifting after removing an elementLookup is great - Random access, constant time
Relatively easy to sort
Relatively small size-wise
Stucked with a fixed size though, so no flexibility if this needs to be changed

---

Linked Lists

Insertion is easy - Just tack onto the front
Deletion is easy - Once you find that element
Lookup is bad - Have to rely on linear search
Relatively difficult to sort unless you're willing to compromise on super fast insertion.
Relatively small size-wise (But not as small as arrays)

---

Hash Tables

Insertion is fairly straight forward - Two step process. Hash, then add
Deletion is easy - Once the element is found
Lookup is on average better than with linked lists because you have the benefit of a real-world constant factor
Not an ideal data structure if sorting is the goal. Just use an array in that case.
Can run the gamut of size.

---

Tries

Insertion is complex - A lot of dynamic memory allocation but gets easier as you go
Deletion is  is easy - Just free a node
Look up is fast - Not quite as a fast as an array but nearly
Already sosrted - Sorts as you build in almost all situations
Rapidly becomes huge, even with very little data present. So not great if space is at a premium.

---

Overall

Arrays are easy to sort and are small
Linked Lists are easy to insert and delete from and are small
Hash Tables are easy to insert and delete, ok at lookups
Tries have easy insertion and deletion, look up is fast, and they're already sorted by nature BUT they're quickly gigantic
