// 1    *    2   *   3   *   4   *   5   * 
// Purpose  : Display numbers and '*' alternately.
// Concepts : Functions, printf()
// New      : Mixed Output Pattern
// Change   : Numbers only → Numbers with symbols.

#include<stdio.h>

void Display()
{
    printf("1\t*\t");
    printf("2\t*\t");
    printf("3\t*\t");
    printf("4\t*\t");
    printf("5\t*\t");

    printf("\n");
}

int main()
{
    Display();

    return 0;
}