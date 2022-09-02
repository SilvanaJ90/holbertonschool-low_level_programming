#include "hash_tables.h"

/**
 * hash_table_print - check code
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *item = NULL;

	if (ht == NULL)
		return;
	item = ht->array[i];
	for (i = 0; i < ht->size; i++)
	{
		while (item != NULL)
		{ item = item->next;
		}
			printf("%s%s\n", item->key, item->value);
			if (ht->array[i] == NULL)
				return;
		}
	}
	printf("\n");
}
