/*
---------------------------------------------------------
Purpose  : Replace a specific character in a string.
Concepts : Call by Address, Character Modification.
New      : In-place string modification.
Change   : Replaces 'a' with '_'.
---------------------------------------------------------
*/

#include<stdio.h>

void Change( char str[])
{

    while(*str != '\0')
    {
        if (*str == 'a')
        {
            *str = '_';
        }
        str++;
    }
}
                                                //We dont return anything because of call by address.
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);    

    Change(Arr);

    printf("Updated string is : %s",Arr);
  
    return 0;
}
