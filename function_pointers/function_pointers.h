#ifndef DOG_FILE
#define DOG_FILE

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
