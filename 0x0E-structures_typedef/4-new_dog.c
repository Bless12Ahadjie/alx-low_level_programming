#include <stdlib.h>
#include "dog.h"
/**
* _strlen - This give string length
*
* @s: takes value
*
* Return: Always 'a' (success)
*/
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
/**
 * *_strcpy - copies the string pointed by src
 *
 * @dest: takes value
 * @src: takes value
 *
 * Return: Always @dest (success)
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int a;

	while (src[length] != '\0')
	{
		length++;
	}
	for (a = 0; a < length; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 * new_dog - This function that creates a new dog
 *
 * @name: first element
 * @age: second element
 * @owner: third element
 *
 * Return: dog (Success), otherwise retur NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length = _strlen(name);
	int length1 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (length + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length1 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
