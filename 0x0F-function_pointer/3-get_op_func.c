#include <stddef.h>
#include "3-calc.h"


int (*get_func_op (char *s))(int, int)
{
    int i = 0;
    op_t ops[] =
    {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_moud},
        {NULL, NULL}
    };
    while (i < 5)
    {
        if(*s == ops[i].op[0] && *s != 1)
        {
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}
