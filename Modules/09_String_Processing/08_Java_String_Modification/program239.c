/*
---------------------------------------------------------
Purpose  : Toggle the case of each character.
Concepts : Character Classification, ASCII Conversion.
New      : User-defined string toggle function.
Change   : Converts uppercase to lowercase and vice versa.
---------------------------------------------------------
*/

#include<stdio.h>

void strtoggleX( char str[])
{

    while(*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str -= 32 ;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
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

    strtoggleX(Arr);

    printf("Updated string is : %s",Arr);
    return 0;

}
