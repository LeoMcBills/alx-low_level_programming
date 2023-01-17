#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: firsf member of the structure
 * @age: Second member
 * @owner: Third member
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dogger - typedef for struct dog
 */
typedef struct dog dogger;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dogger *new_dog(char *name, float age, char *owner);
void free_dog(dogger *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
