#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @key: the key
 * @ht: the hash table
 * 
 * return: value associated with the element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    
    index = key_index(key, ht->size);
    if(index >= ht->size)
        return (NULL);
    for (index;ht->array[index] != NULL; index++)
    {
        if (strcmp(ht->array[index]->key, key) == 0)
            return (ht->array[index]->value);
    }
    return (NULL);
}