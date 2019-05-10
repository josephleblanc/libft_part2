// Description
// Allocates (with malloc(3)) and returns a "resh string end-
// ing with '\0'. Each character of the string is initialized at
// '\0'. If the allocation fails the function returns NULL.
//
// Param #1
// The size of the string to be allocated.
//
// Return value
// The string allocated and initialized to 0.
//
// Libc functions
// malloc(3)


#include <strings.h>

char *ft_strnew(size_t size)
{
    char *new_string;

    if (new_string = (char *)malloc(size * sizeof(char)))
    {
        memset(new_string, '\0', size);
        return (new_string);
    }
    return (NULL);
}
