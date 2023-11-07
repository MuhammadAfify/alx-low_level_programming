#ifndef STRUCTS
#define STRUCTS
/**
 * struct dog - feature for dog
 * @name : the name for dog
 * @age : the age for dog
 * @owner : name of dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*STRUCTS*/
