/*
---------------------------------------------------------
Purpose  : Count numeric digits in a string.
Concepts : ASCII Values, Character Classification.
New      : Digit detection using ASCII values.
Change   : Introduces numeric character counting.
---------------------------------------------------------
*/

#include<stdio.h>

void CountDigits( char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if ((48 <= *str) && (*str<= 57))
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