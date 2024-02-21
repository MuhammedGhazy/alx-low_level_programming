#include "main.h"

char *str_dub (char *str)
{
        char *ptr = NULL;
        uint32_t i = 0, size = 0;

        if(str == NULL)
        {
                return (NULL);
        }
        else
        {
		for(; str[size] != '\0'; size++)
			;
                ptr = (char *) malloc ( (size + 1) * (sizeof(char)) );
                if (ptr == NULL)
                {
                        return (NULL);
                }
                else
                {
                        for(i = 0; i <= size ; i++)
                        {
                                ptr[i] = str[i];
                        }
                }
        }
        return (ptr);
}
