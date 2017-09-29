#include <stddef.h>

char    *ft_strchr(const char *s, int c)
{

    while(*s != '\0')
    {
        if (*s++ == (char) c)
            return (char *)--s;
    }

    return NULL;
}
