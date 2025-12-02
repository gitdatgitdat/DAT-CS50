Algo used to sort a set of elements by moving higher valued elements to the right, or top, of the array. This then moves lower valued elements to the left, or the bottom.

Psuedocode would look like:

Set swap counter to a non-zero valued
Repeat until the swap counter is 0
	Reset the swap counter to 0
	Look at each adjacent pair
		If two adjacent elements are not in order, swap them and add one to the swap counter
		
Worst case, the array is completely reversed and each element needs to be moved across the array N times.

Best case, the array is already perfectly sorted and no swaps occur.

This makes this algo better than algo's like Selection when arrays are already sorted but similarly effective with unsorted lists.