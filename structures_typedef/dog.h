#ifndef DOG_FILE
#define DOG_FILE
/**
 * struct dog - the Struct type for scooby
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
