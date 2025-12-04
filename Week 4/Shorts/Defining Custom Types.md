Say you're using a struct and would rather have a shorter data type to use when referencing it.

This can be done iwth a custom type.

typedef <old name> <new name>;

So if you were using a struct called unsigned char, you could change it to byte:

typedef unsigned char byte;

Now you can simply use byte in your source code. Similarly, if you created a struct car:

struct car
{
	int year;
	char model[10];
	char plate[7];
	int odometer;
	double engine_size;
}

typedef struct car car_t;

You can now use car_t to reference struct car. This occurs so often, you can actually simplify this further:

typedef struct car
{
	int year;
	char model[10];
	char plate[7];
	int odometer;
	double engine_size;
}
car_t;

