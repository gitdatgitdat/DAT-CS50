Algo that finds the smallest unsorted element and adds it to the beginning of the list.

In psuedocode:

Repeat until no sorted elements remain:
	Search the unsorted array for the smallest value
	Swap the smallest value with the first element of the array
	
Worst case, every element of the array must be sorted and the process is repeated N times since only one element can be moved at a time.

Best case, is really the same as the worst case. Every element must be run through N times.

So it has the same worst and best case run time.