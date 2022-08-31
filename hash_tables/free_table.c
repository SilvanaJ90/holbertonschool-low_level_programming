#include "hash_tables.h"
#include <stdlib.h>

/**
 * free_item - check code
 * @item: pointer item
 */

void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

/**
 * free_table - check code
 * @table: pointer table
 */

void free_table(hash_table_t *table)
{
	unsigned long int i = 0;
	for (i = 0; i < table->size; i++)
	{
		hash_node_t *item = table->array[i];
		if (item != NULL)
			free_item(item);
	}
	free(table->array);
	free(table);
}
