/*
---------------------------------------------------------
Purpose  : Replace lowercase characters with '_'.
Concepts : Character Range, String Modification.
New      : Modifying characters using range checking.
Change   : Replaces all lowercase letters.
---------------------------------------------------------
*/

#include<stdio.h>

void Change( char str[])
{

    while(*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);    

    Change(Arr);

    printf("Updated string is : %s",Arr);
    return 0;

}
