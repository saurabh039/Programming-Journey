/*
---------------------------------------------------------
Purpose  : Count numeric digits in a string.
Concepts : Character Literals, Character Classification.
New      : Uses '0' to '9' instead of ASCII values.
Change   : Improves readability of digit comparison.
---------------------------------------------------------
*/

#include<stdio.h>

void CountDigits( char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (('0' <= *str) && (*str<= '9'))
        {
            iCount++;
        }
        str++;
    }
    printf("Numbers of Digits are : %d\n", iCount);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);    

    CountDigits(Arr);
  
    return 0;
}
 
//48 to 57