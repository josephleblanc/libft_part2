// Description
// Sets every character of the string to the value '\0'
//
// Param #1
// The string that needs to be cleared.
//
// Return value
// None
//
// Libc functions
// None


void    ft_strclr(char *s)
{
    while (*s)
        *s++ = '\0';
}
