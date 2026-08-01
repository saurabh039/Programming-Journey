/*
---------------------------------------------------------
Purpose  : Demonstrate string traversal using pointers.
Concepts : Character Pointer, Dereferencing, Pointer Arithmetic.
New      : Accessing characters using a pointer.
Change   : Introduces pointer-based string traversal.
---------------------------------------------------------
*/

#include<stdio.h>

int main()
{
    char Name[50] = {'\0'};

    printf("Enter your name:\n");
    scanf(" %[^'\n']s",Name);            

    printf("Hello :%s\n",Name);    
    return 0;
}