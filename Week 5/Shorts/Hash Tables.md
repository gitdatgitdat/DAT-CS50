Hash tables combine the random access of an array with the dynamism of a linked lists. So we can insert, delete, and look up with near constant time while mitigating the disadvantages of arrays and lists. The trade off is that has tables are not great at ordering or sorting data. 

A hash table is a combination of two things:

Hash function: This return a nonnegative integer value to be used as a hash code.

Array: This is for storing data of the type we wish to place into that data structure.

We run the data through the hash function, and then it is assigned to the associated array based on the output value, or the hash code.