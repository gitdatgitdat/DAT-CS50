Scope is a characteristic of a variable taht defines from which functions that variable may be accessed.

Local variables can only be accessed within the functions which they were created.

Global variables can be accessed by any function in the program. So any function can access and manipulate it.

Why does this matter? Local variables are passed by value. When this value is called the callee is receiving a copy of that variable. Not the variable itself. So its original value won't change. Where global variable will change call to call, which can cause unintended problems if you're not careful.