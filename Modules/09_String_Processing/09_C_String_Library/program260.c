/*
---------------------------------------------------------
Purpose  : Reverse a string in-place.
Concepts : Two Pointers, Swapping.
New      : User-defined strrev().
Change   : Reverses the original string.
---------------------------------------------------------
*/

#include<stdio.h>

void strrevX(char *str)
{
    char temp = '\0';
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter source string:\n");
    scanf("%[^'\n']s",Arr);

    strrevX(Arr);
    printf("Reversed string is : %s\n",Arr);

    return 0;
}