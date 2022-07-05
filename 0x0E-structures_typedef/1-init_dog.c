#include "DOG_H"
/**
 * init_dog - initialize a variable of type struct
 * @d: struct of type dog
 * @name: property of struct d
 * @age: property of struct d
 * @owner: property of struct d
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
