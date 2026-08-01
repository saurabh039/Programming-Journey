/*
---------------------------------------------------------
Purpose  : Read a complete string including spaces.
Concepts : Scanset, scanf("%[^\n]"), Character Arrays.
New      : Reading strings containing whitespace.
Change   : Uses scanset instead of scanf("%s").
---------------------------------------------------------
*/

#include<stdio.h>

int main()
{
    char Name[50] = {'\0'};

    printf("Enter your name:\n");
    scanf("%s",Name);              // name is arr name so no need to use &

    printf("Hello :%s\n",Name);    //Scanf only takess values till spaces
    return 0;
}