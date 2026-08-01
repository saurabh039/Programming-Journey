/*
---------------------------------------------------------
Purpose  : Count occurrences regardless of letter case.
Concepts : Logical OR, Character Comparison.
New      : Case-insensitive character searching.
Change   : Checks both uppercase and lowercase letters.
---------------------------------------------------------
*/

#include<stdio.h>

int CountOccurance( char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (*str == ch)
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

    iRet = CountOccurance(Arr , 'd');
    printf("Numbers of Occurances are : %d\n",iRet);
  
    return 0;
}