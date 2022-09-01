#include "hash_tables.h"

/**
 * hash_table_set - check code
 * @ht: value hash table
 * @key: value key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */

hash_node_t *new_t_node(char *key, char *value)
{
    hash_node_t *new_node;

    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (NULL);

    new_node->key = key;
    new_node->value = value;
    new_node->next = 0;

    return (new_node);
}

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *head, *temp, *new_node;
    char *val, *k;
    unsigned long int mapped;

    if (strlen(key) == 0 || !key || !ht)
        return (0);

    val = strdup(value);
    k = strdup(key);

    mapped = key_index((unsigned char *)key, ht->size);
    head = ht->array[mapped];
    temp = head;

    if (!head)
    {
        new_node = new_t_node(k, val);
        if (!new_node)
            return (0);
        ht->array[mapped] = new_node;
        return (1);
    }

    while (temp)
    {
        if (strcmp(temp->key, k) == 1)
        {
            temp->value = val;
            return (1);
        }
        temp = temp->next;
    }

    new_node = new_t_node(k, val);
    if (!new_node)
        return (0);

    new_node->next = head;
    head = new_node;

    return (1);
}
