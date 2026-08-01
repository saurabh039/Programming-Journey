/*
---------------------------------------------------------
Purpose  : Convert uppercase letters to lowercase.
Concepts : ASCII Conversion, String Modification.
New      : User-defined strlwr() implementation.
Change   : Converts entire string to lowercase.
---------------------------------------------------------
*/

#include<stdio.h>

void strlwrX( char str[])
{

    while(*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str += 32 ;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);    

    strlwrX(Arr);

    printf("Updated string is : %s",Arr);
    return 0;

}
