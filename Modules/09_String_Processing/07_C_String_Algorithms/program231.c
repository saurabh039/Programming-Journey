/*
---------------------------------------------------------
Purpose  : Count uppercase and lowercase characters.
Concepts : Character Classification, String Traversal.
New      : Counting multiple character types together.
Change   : Maintains separate counters for capital and small letters.
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
        else if (('a'<= *str) && (*str<= 'z'))
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
