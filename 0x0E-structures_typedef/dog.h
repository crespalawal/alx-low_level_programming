#ifndef MAIN_H
#define MAIN_H

/**
  5  * struct dog - new type
  6  * @name: string variable
  7  * @age: integer variable                                8  * @owner: string/char
  9  *
 10  * Description: create a new type
 11  */
 12
 13 struct dog{
 14         char *name;
 15         float *age;
 16         char *owner;
 17 };
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*MAIN_H*/
