#include "main.h"
#include <stdlib.h>

/**
 * _realloc
 * @ptr: pointer to the previous allocated memory
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to new allocated space in memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void *newptr;
	int i;

	if ((new_size == 0) && (ptr != NULL))
	{
	  free(ptr);
	  return (NULL);
	}
	
	if (new_size = old_size)
		return (ptr);
	
	if (ptr == NULL)
	{
	  newptr = malloc(new_size);
	  	if (newptr == NULL)
			return (NULL);
	  return (newptr);
	}
	
	if (new_size > old_size)
	{
	  newptr = malloc(new_size);
	  if (newptr == NULL)
	    return (NULL);
	  for (i = 0; i < old_size; i++)
	    {
	      newptr[i] = ptr[i];
	    }
	  free(ptr);
	  return (newptr);
	}
	  
}
