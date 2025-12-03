Merge sort is to sort smaller arrays and then merge them in sorted order. If we have one array of six elements, break it down to six arrays of one element, and bring them back together in order.

In psuedocode:

Sort the left half of the array (Assuming n > 1)
Sort the right half of the array (Assuming n > 1)
Merge two halves together

While simple, this can quickly become more complicated in execution. But the best and worst case scenario are both (n log n), which is faster than the other algos we tried. Such as bubble and selection.
