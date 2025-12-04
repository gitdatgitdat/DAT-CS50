So how do functions know the order to run in? When one function calls another, how do they know to pass data between each other?

When a function is called, the system sets aside space in memory for that function to do its work. This is often referred to as stack frames or function frames.

More than one function's stack frame may exist in memory. If main() calls move() which then calls direction(), all three functions have open frames. Although generally only one of these frames is active at a given time.

All these frames are arranged in a stack. The active frames rests on top, and the other frames rest underneath. If a new function is called, it would take the top spot and the previous active frame would be put on pause. Once the function finishes its job, its popped off of the stack and the frame below becomes active.