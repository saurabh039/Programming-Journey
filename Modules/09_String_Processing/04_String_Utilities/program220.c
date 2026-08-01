/*
---------------------------------------------------------
Purpose  : Implement a user-defined strlen() function.
Concepts : String Traversal, Counting, Functions.
New      : Manual implementation of strlen().
Change   : Calculates string length without library function.
---------------------------------------------------------
*/

#include<stdio.h>

int Count( char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (*str == 'a' || *str == 'A')
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

    iRet = Count(Arr);
    printf("Occurencce of a in string is : %d\n",iRet);
  
    return 0;
}