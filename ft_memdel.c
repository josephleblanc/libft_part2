// Description
// Takes as a parameter the address of a memory area that needs
// to be freed withfree(3), then puts the pointer to NULL.
//
// Param #1
// A pointer's address that needs its memory freed and set to
// NULL
//
// Return value
// None
//
// Libc functions
// free()

#include <stdlib.h>

//#include <stdio.h>
//#include <strings.h>


void ft_memdel(void **ap)
{
    if (ap)
    {
        free(ap);
        ap = NULL;
    }
}

//int main(void)
//{
//    char *s;
//    void *vp;
//    int i;
//    int n;
//
//    vp = s;
//
//    s = (char*)malloc(20 * sizeof(char));
//
//    bzero(s, 20);
//    i = -1;
//    n = 12;
//    while (++i < n)
//        s[i] = 'a' + i;
//    s[i+1] = '\0';
//    printf("before memdel, s = %s\n", s);
//    ft_memdel(&vp);
//    printf("after memdel it's a mystery what should happen.\n");
//
//    return 0;
//}
