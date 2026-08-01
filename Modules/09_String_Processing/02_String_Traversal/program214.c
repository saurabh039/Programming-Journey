/*
---------------------------------------------------------
Purpose  : Display every character of a string.
Concepts : while Loop, Pointer Traversal, Null Terminator.
New      : Complete traversal of a string.
Change   : Traverses until '\0' is encountered.
---------------------------------------------------------
*/

#include<stdio.h>

void Display( char *str)
{
    printf("%c\n",str);
    str++;
    printf("%c\n",str);
    str++;  
    printf("%c\n",str);

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf(" %[^'\n']s",Arr);   

    Display(Arr);
  
    return 0;
}