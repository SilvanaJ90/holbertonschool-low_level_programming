#include "hash_tables.h"

/**
 * hash_table_delete - check code
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	/*hash_node_t *item = NULL;*/

	if (!ht || !ht->array)
		return;

    for (i = 0; i <ht->size; i++) {
        hash_node_t *item = ht->array[i];
        if (item != NULL)
            free_item(item);
    }

    free(ht->array);
    free(ht);
}
