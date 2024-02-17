#include <stdlib.h>

char *creat_array(unsigned int size, char *c)
{
    char *ptr = NULL;

    ptr = (char *)malloc(size * sizeof(char));
    if ((ptr == NULL) && (size == 0)) {
        return NULL;
    }
    else {
        while (size--) {
            ptr[size] = c[size];
        }
    }
    return ptr;
}

