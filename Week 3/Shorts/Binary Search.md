Algo used to find an element in an array by dividing and conquering, reducing the search area by half each time to find the target number. However, our array must first be sorted.

The psuedocode would be:

Repeat until the (sub)array is the size of 0:
	Calculate the middle point of the current array
	I the target isat the middle, stop
	Otherwise, if the target is less than the middle, repeat but focus on the left side of the array
	Otherwise, if the target is greater than the middle, repeat but focus on the rigth side of the array.
	
So determine your target: 19
The start: 0
The end: 14
The middle: 7

If 19 is above the middle, 7, we repeat the process with the upper half of the array until 19 is found.

If 19 does not exist in our array, this algorithm would still work and would show a cross between the start and end point.

Worst case, the list has to be split N times until we find the cross point.

Best case, the target is found on the first split of the array.