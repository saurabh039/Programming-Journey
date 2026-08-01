/*
---------------------------------------------------------
Purpose  : Count occurrences of a specific character.
Concepts : Character Comparison, String Traversal.
New      : Character searching in strings.
Change   : Counts occurrences of a fixed character.
---------------------------------------------------------
*/

#include<stdio.h>

int CountVowels( char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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

    iRet = CountVowels(Arr);
    printf("Numbers of vowels are : %d\n",iRet);
  
    return 0;
}