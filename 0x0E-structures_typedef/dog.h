#ifndef DOG_H
#define DOG_H

/**
 * struck dog - dog's basic declarations
 * @name: fist member
 * @owner: second member
 * @age : third member
 * Description - long description
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - typedef for struct dog
 * Description - describe dog_t
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
