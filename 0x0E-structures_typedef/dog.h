#ifndef DOG_H
#define DOG_H
/*
 * Desc: Header file that defines a new struct dog
 */

/**
 * struct dog - A new struct type describing a dog
 * @name: pointer to a char
 * @age: float type
 * @owner: pointer to char
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
