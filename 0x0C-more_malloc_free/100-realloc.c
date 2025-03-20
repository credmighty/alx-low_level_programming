/** APPROACH
 *
 * declare the a new_ptr
 * if new_size == old_size; return ptr
 * if (ptr == null), return malloc(new_size)
 * if new_size == 0 and ptr == null; free(ptr) then return (NUll)
 * allocate new_ptr memory = malloc(new_size)
 * to copy the content, declare two new pointer to char for source (src) and
 * destination (dest) assigned src to ptr(casting) and dest to new_ptr(casting
 * loop thru src then copy in dest
 * free ptr then return new_ptr
 * if new_size > old_size; malloc()
 */

#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates a memory block using malloc and free functions
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size, in bytes, of the allocated space for @ptr
* @new_size: new size, in bytes of the new memory block
* Return: pointer to new allocated memory
* NULL, if @ptr is NULL (FAILURE) or
* NULL, if @new_size == 0 && @ptr != NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
        void *new_ptr;
        unsigned int i;
        char *src, *dest;

        if (new_size == old_size)
                return (ptr);
        if (ptr == NULL)
                return malloc(new_size);
        if (new_size == 0 && ptr == NULL)
        {
                free(ptr);
                return (NULL);
        }
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
                return (NULL);
        src = (char *)ptr;
        dest = (char *)new_ptr;
        for (i = 0; i < old_size && i < new_size; i++)
        {
                dest[i] = src[i];
        }
        free(ptr);
        return (new_ptr);
}
