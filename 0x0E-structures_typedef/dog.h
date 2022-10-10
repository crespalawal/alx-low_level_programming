#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - new type
 * @name: string variable
 * @age: integer variable
 * @owner: char/string variable
 * Description: create a new type
 */

struct dog{
	char *name;
 	float *age;
	char *owner;
 };
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*MAIN_H*/
