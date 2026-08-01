/*
---------------------------------------------------------
Purpose  : Count occurrences of a user-defined character.
Concepts : Portable Input, Character Search, Parameters.
New      : Best practice for character input in C.
Change   : Final implementation using scanf(" %c").
---------------------------------------------------------
*/

#include<stdio.h>

void CountAll( char str[])
{
    int iCountSml = 0, iCountCap = 0;

    while(*str != '\0')
    {
        if (('A'<= *str) && (*str<= 'Z'))
        {
            iCountCap++;
        }
        else         
        {
            iCountSml++;
        }
        str++;
    }
    printf("Numbers of Capital character are : %d\n", iCountCap);
    printf("Numbers of small character are : %d\n" , iCountSml);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf(" %[^'\n']s",Arr);    

    CountAll(Arr);
  
    return 0;
}
