/*
---------------------------------------------------------
Purpose  : Handle character input after string input.
Concepts : fflush(stdin), Input Buffer.
New      : Clearing the input buffer.
Change   : Prevents skipped character input.
---------------------------------------------------------
*/

#include<stdio.h>

int CountSmall( char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (('a'<= *str) && (*str<= 'z'))
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