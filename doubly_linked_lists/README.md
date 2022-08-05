# Doubly-Linked Lists

Doubly-Linked Lists — linked lists containing integer values or pointers to data, with the ability to iterate over the list in both directions
  

## Description

The GList structure and its associated functions provide a standard doubly-linked list data structure.

Each element in the list contains a piece of data, together with pointers which link to the previous and next elements in the list. Using these pointers it is possible to move through the list in both directions (unlike the Singly-Linked Lists which only allows movement through the list in the forward direction).

The data contained in each element can be either integer values, by using one of the Type Conversion Macros, or simply pointers to any type of data.

List elements are allocated from the slice allocator, which is more efficient than allocating elements individually.

Note that most of the GList functions expect to be passed a pointer to the first element in the list. The functions which insert elements return the new start of the list, which may have changed.

There is no function to create a GList. NULL is considered to be the empty list so you simply set a GList* to NULL.

To add elements, use **g_list_append(), g_list_prepend(), g_list_insert() and g_list_insert_sorted().**

To remove elements, use **g_list_remove().**

To find elements in the list use **g_list_first(), g_list_last(), g_list_next(), g_list_previous(), g_list_nth(), g_list_nth_data(), g_list_find() and g_list_find_custom().**

To find the index of an element use **g_list_position() and g_list_index().**

To call a function for each element in the list use **g_list_foreach().**

To free the entire list, use **g_list_free().**


![https://www.w3resource.com/w3r_images/c-linked_list-exercise-11-image.png)
