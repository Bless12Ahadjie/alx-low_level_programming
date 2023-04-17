#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this contains elements of a dog
 * @name: First element
 * @age: Second element
 * @owner: Third
 *
 */

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
