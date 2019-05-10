#include "libft.h"
//#include <stdio.h>       // These three includes are for
//#include <strings.h>     // tests
//#include <unistd.h>

void *ft_memalloc(size_t n)
{
    void *vp;

    if ((vp = malloc(n)))
    {
        ft_bzero(vp, n); // change to ft_bzero
        return vp;
    }
    return NULL;
}


// Test
//int main(void)
//{
//    size_t n;
//    void *input;
//    char *s;
//    int i;
//
//    i = -1;
//    n = 6;
//
//    if (input = ft_memalloc(n))
//    {
//        while (++i < n)
//        {
//            s = (char*)input;
//            *s = *s + 'a';
//            write(1, s++, 1);
//            input++;
//        }
//    }
//    else
//        printf("memalloc returned NULL\n");
//    printf("\n");
//    return 0;
//
//}
