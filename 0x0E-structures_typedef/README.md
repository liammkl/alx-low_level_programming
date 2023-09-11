Poppy Define a new data type called "dog" with the following components:
"name" of type "char *"
"age" of type "float"
"owner" of type "char *"
A dog's love is unparalleled Create a function that initializes a variable of type "dog."
Function Prototype: void initialize_dog(struct dog *d, char *name, float age, char *owner);
A dog teaches the essence of unconditional love. Having that in life can make things better Design a function that prints the details of a "dog" structure.
Function Prototype: void print_dog(struct dog *d);
Formatting: Refer to the example below.
You may utilize the standard library.
If any element of "d" is NULL, print "(nil)" in place of that element. (For instance, if "name" is NULL, print "Name: (nil)")
If "d" is NULL, do not print anything.
Beyond a dog, a book is a man's closest companion. Inside a dog, it's too dark to read Introduce a new type, "dog_t," as an alias for the "dog" structure type.
A dog is always on the wrong side of a door Develop a function that creates a new "dog."
Function Prototype: dog_t *create_dog(char *name, float age, char *owner);
You must store copies of "name" and "owner."
Return NULL if the function encounters an error.
If you consider a dog's tail a leg, how many legs does a dog have? Four. Labeling a tail as a leg doesn't make it one Create a function that releases memory associated with "dog" structures.
Function Prototype: void free_dog(dog_t *d)

