/*
---------------------------------------------------------
Purpose  : Count spaces in a string.
Concepts : Character Comparison, String Traversal.
New      : Detecting whitespace characters.
Change   : Introduces space counting.
---------------------------------------------------------
*/

#include<stdio.h>

void CountSpace( char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if (*str == ' ')                        //AscII value of space is 28  
        {
            iCount++;
        }
        str++;
    }
    printf("Numbers of Spaces are : %d\n", iCount);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);    

    CountSpace(Arr);
  
    return 0;
}
 
//48 to 57