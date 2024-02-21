#include "main.h"

int main()
{
    char *ptr = NULL;
    char *Name = "Muhammed";
    unsigned int size = 10;
    char *ptr_return = NULL;

//    ptr = creat_array(size, Name);
 //   printf("%s\n", ptr);
      ptr_return = str_dub(Name);
      printf("%s\n", ptr_return);

    return 0;
}

