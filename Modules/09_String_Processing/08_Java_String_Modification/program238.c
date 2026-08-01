/*
---------------------------------------------------------
Purpose  : Convert lowercase letters to uppercase.
Concepts : ASCII Conversion, String Modification.
New      : User-defined strupr() implementation.
Change   : Converts entire string to uppercase.
---------------------------------------------------------
*/

#include<stdio.h>

void struprX( char str[])
{

    while(*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str -= 32 ;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);    

    struprX(Arr);

    printf("Updated string is : %s",Arr);
    return 0;

}
