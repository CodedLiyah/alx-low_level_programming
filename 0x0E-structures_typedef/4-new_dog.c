#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i = 0, r = 0, m;
dog_t *doge;
while (name[i] != '\0')
i++;
while (owner[r] != '\0')
r++;
doge = malloc(sizeof(dog_t));
if (doge == NULL)
{
free(doge);
return (NULL);
}
doge->name = malloc(i *sizeof(doge->name));
if (doge->name == NULL)
{
free(doge->name);
free(doge);
return (NULL);
}
for (m = 0; m <= i; m++)
doge->name[m] = name[m];
doge->age = age;
doge->owner = malloc(r *sizeof(doge->owner));
if (doge->owner == NULL)
{
free(doge->owner);
free(doge->name);
free(doge);
return (NULL);
}
for (m = 0; m <= r; m++)
doge->owner[m] = owner[m];
return (doge);
}
