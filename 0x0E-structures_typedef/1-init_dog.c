#include "dog.h"
/**
 * init_dog - intitialize information.
 * @d: var
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs ownername
 * Return: 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
