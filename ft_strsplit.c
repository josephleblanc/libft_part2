// Description
// Allocates (with malloc(3)) and returns an array of "fresh"
// strings (all ending with '\0', including the array itself) ob-
// tained by splitting s using the character c as a delimiter.
// If the allocation fails the function returns NULL.
// Example:
// ft_strsplit("*hello*fellow***students*", '*')
// returns ["hello", "fellow", "students"]
//
// Param #1
// The string to split
//
// Param #2
// The delimiter character
//
// Return value
// The array of "fresh" strings result of the split.
//
// libc functions
// malloc(3), free(3)

#include "libft.h"

#include <stdio.h>         // Don't forget to take this out!!!

int ft_wc(char const *s, char c)
{
    int pres;
    int fut;
    int wc;

    pres = 0;
    fut = 1;
    wc = 0;
    if (s[pres] != c)
        wc++;
    while (s[fut])
    {
        if (s[pres] == c && s[fut] != c)
            wc++;
        pres++;
        fut++;
    }
    return wc;
}

size_t word_length(const char *s, size_t start, char c)
{
    size_t end;
    end = start;
    while (s[end] != c && s[end])
        end++;
    return (end - start);
}

char    **ft_strsplit(char const *s, char c)
{
    size_t pres;
    size_t fut;
    char **word_array;
    size_t array_i;

    pres = 0;
    fut = pres + 1;
    array_i = 0;
    if (!(word_array = (char**)malloc((ft_wc(s, c) + 1) * sizeof(char**))))
        return (NULL);
    if (s[0] != c)
        word_array[array_i++] = ft_strsub(s, 0, word_length(s, 0, c));
    while (s[pres] && s[fut])
    {
        if (pres == c && fut != c)
            word_array[array_i++] = ft_strsub(s, fut, word_length(s, fut, c));
        pres++;
        fut++;
    }
    word_array[array_i] = '\0';
    return word_array;
}


int main(void)
{
    char const s[] = "**hello***fellow*students***";
    char **words;
    size_t i;

    words = ft_strsplit(s, '*');
    i = 0;
    while (*words)
        printf("words[%li] = %s\n", i, words[i]);
    return 0;
}
