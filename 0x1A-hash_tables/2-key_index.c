#include "hash_tables.h"
/**
 * key_index - 	program gets the index at which a key/value pair should 
 * 		should be stored in array of a hash table
 * @key: key to lookup
 * @size: size of the array
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
