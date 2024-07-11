#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog;
	int cptname = 0;
	int cptowner = 0;
	int cpt;

	Dog = malloc(sizeof(dog_t));
	if (Dog == NULL)
	{
		return (NULL);
	}

	for (cpt = 0; name[cpt]; cpt++)
		cptname++;

	for (cpt = 0; owner[cpt]; cpt++)
		cptowner++;

	Dog->name = malloc(cptname + 1);
	if (Dog->name == NULL)
	{
		free(Dog);
		return (NULL);
	}

	Dog->owner = malloc(cptowner + 1);
	if (Dog->owner == NULL)
	{
		free(Dog->name);
		free(Dog);
		return (NULL);
	}

	for (cpt = 0; cpt <= cptname; cpt++)
		Dog->name[cpt] = name[cpt];

	Dog->age = age;

	for (cpt = 0; cpt <= cptowner; cpt++)
		Dog->owner[cpt] = owner[cpt];
	return (Dog);
}

/**
 * _strdup - copy string
 * @str: string duplicate
 * Return: 0 or NULL
 */

char *_strdup(char *str)
{
	char *t;
	int i = 0;
	int l;

	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; str[l] != '\0'; l++)
	{
	}
	l++;

	t = malloc(sizeof(char) * l);

	if (t == 0)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		t[i] = str[i];
		i++;
	}
	return (t);
}
~
