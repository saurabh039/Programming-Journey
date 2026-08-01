/*
---------------------------------------------------------
Purpose  : Read a character safely after string input.
Concepts : scanf(" %c"), Whitespace Handling.
New      : Portable character input technique.
Change   : Replaces fflush(stdin) with leading space.
---------------------------------------------------------
*/

#include<stdio.h>

int CountCapital( char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (('A'<= *str) && (*str<= 'Z'))
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

    iRet = CountCapital(Arr);
    printf("Numbers of Capital character are : %d\n",iRet);
  
    return 0;
}
