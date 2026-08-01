/*
---------------------------------------------------------
Purpose  : Demonstrate string representation in memory.
Concepts : Character Arrays, strlen(), sizeof().
New      : Difference between string length and array size.
Change   : Compares sizeof() with strlen().
---------------------------------------------------------
*/

#include<stdio.h>

int Count( char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (*str == 'A')
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
    printf("Occurencce of A in string is : %d\n",iRet);
  
    return 0;
}