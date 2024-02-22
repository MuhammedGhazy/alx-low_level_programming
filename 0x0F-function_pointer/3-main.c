#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main()
{
	int Num1 = 0, Num2 = 0;
	int Result = 0;
    	char op ;

    	printf("Please Enter The Opreation\n");
	scanf("%c", &op); 
	printf("Please Enter First Number\n");
	scanf("%i", &Num1);
	printf("Please Enter Second number \n");
	scanf("%i", &Num2);

    Result = (*get_func_op(&op))(Num1,Num2);
    printf("Result = %i", Result);

	return (0);
}
