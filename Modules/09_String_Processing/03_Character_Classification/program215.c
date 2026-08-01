/*
---------------------------------------------------------
Purpose  : Count lowercase letters using ASCII values.
Concepts : ASCII Range, Character Comparison, Counting.
New      : Character classification using ASCII codes.
Change   : Introduces lowercase character counting.
---------------------------------------------------------
*/

#include<stdio.h>

void Display( char *str)
{
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
    str++;

}
int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf(" %[^'\n']s",Arr);   

    Display(Arr);
  
    return 0;
}

