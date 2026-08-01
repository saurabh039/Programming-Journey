/*
---------------------------------------------------------
Purpose  : Count occurrences of a user-defined character.
Concepts : Function Parameters, Character Search.
New      : Parameterized character searching.
Change   : Accepts the search character as input.
---------------------------------------------------------
*/

#include<stdio.h>

int CountSmall( char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if ((97<= *str) && (*str<= 122))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String:\n");
    scanf(" %[^'\n']s",Arr);    

    iRet = CountSmall(Arr);
    printf("Numbers of small character are : %d\n",iRet);
  
    return 0;
}

//97-122