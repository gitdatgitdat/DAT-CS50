Structures provide a way to unify several variables of different types intoa  single, new variable type which can be assigned its own type name.

We use structures (structs) to group together elemnts of a variety of data types that a have a logical connection.

Think of structs as a super variable that holds multiple variables within it. Say we want to build one for a "car":

struct car
{
	int year;
	char model[10];
	char plate[7];
	int odometer;
	double engine_size;
};

We would rference that simply with "car" but it would contain each of these variables within it.

Once a struct is defined, which is typically done in seperate .h files, have effectively created a new type. If we were to then use it, we'd want to declare it like so:

struct car mycar;

And then we can access each variable within it like this:

mycar.year = 2011;
strcpy(mycar.plate, "CS50");
mycar.odometer = 50505;

We can also use pointers to dereference and access the struct. You would allocate memory:

struct car *mycar = malloc(sizeof(struct car));

And then access each field:

mycar->year = 2011;
strcpy(mycar->plate, "CS50");
mycar->odometer = 50505;

The "->" was implemented by C developers to simplify this process. C will know when seeing this symbol to dereference the struct on the left of it.

