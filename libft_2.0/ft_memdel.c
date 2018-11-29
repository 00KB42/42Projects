#include "libft.h"

void ft_memdel(void **ap)
{
        free(*ap);
        *ap = NULL; // prevents unintended memory changes if we accidentally use ptr again, previously had '\0' which gave an error since this is a character. Can also type 0 instead of NULL.
}

//Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.
