/*
---------------------------------------------------------
Purpose  : Count occurrences of an uppercase character.
Concepts : Case Sensitive Comparison, String Traversal.
New      : Searching uppercase characters.
Change   : Searches for capital letters only.
---------------------------------------------------------
*/

#include<stdio.h>

int CountVowels( char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if ((*str == 'U') || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') 
         || (*str == 'a') ||  (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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
    scanf("%[^'\n']s",Arr);   

    iRet = CountVowels(Arr);
    printf("Numbers of vowels are : %d\n",iRet);
  
    return 0;
}