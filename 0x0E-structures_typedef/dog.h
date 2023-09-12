#ifndef STRUCTS
#define STRUCTS
/**
 * struct dog - feature for dog
 * @name : the name for dog
 * @age : the age for dog
 * @owner : name of dog owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif /*STRUCTS*/
#ifndef _FUNCTION_H
#define _FUNCTION_H
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
