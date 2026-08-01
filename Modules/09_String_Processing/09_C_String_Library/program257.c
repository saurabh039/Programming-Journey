/*
---------------------------------------------------------
Purpose  : Copy one string into another.
Concepts : Pointers, String Traversal.
New      : User-defined strcpy().
Change   : Copies source string character by character.
---------------------------------------------------------
*/

#include<stdio.h>

void strcpyx(char *src , char *dest)
{
    while (*src != '\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    strcpyx(Arr,Brr);
    printf("Copied string is : %s\n",Brr);

    return 0;
}