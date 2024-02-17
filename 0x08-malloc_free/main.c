#include <stdio.h>
#include "main.h"

int main()
{
    char *ptr = NULL;
    char *Name = "Muhammed";
    unsigned int size = 10;

    ptr = creat_array(size, Name);
    printf("%s\n", ptr);

    return 0;
}

