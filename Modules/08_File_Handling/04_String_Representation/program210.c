/*
---------------------------------------------------------
Purpose  : Demonstrate manual string initialization.
Concepts : Character Arrays, Null Terminator.
New      : Explicit string construction using character arrays.
Change   : Manually appends '\\0' to terminate the string.
---------------------------------------------------------
*/

#include<stdio.h>

int main()
{
    char Arr[] = {'H','e','l','l','o','\0'};

    printf("%s\n",Arr);

    return 0;
}