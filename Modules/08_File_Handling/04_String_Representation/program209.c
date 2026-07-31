/*
---------------------------------------------------------
Purpose  : Demonstrate string initialization using literals.
Concepts : Character Arrays, String Literals.
New      : Compiler automatically appends the null terminator.
Change   : Uses shorthand string initialization.
---------------------------------------------------------
*/

#include<stdio.h>

int main()
{
    char Arr[] = "Hello";

    printf("%s\n",Arr);

    return 0;
}