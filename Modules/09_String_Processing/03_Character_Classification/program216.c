/*
---------------------------------------------------------
Purpose  : Count lowercase letters using character literals.
Concepts : Character Literals, Character Range.
New      : Uses 'a' and 'z' instead of ASCII values.
Change   : Improves readability of character comparison.
---------------------------------------------------------
*/

#include<stdio.h>

void Display( char str[])
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