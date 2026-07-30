/*
---------------------------------------------------------
Purpose  : Delete an existing file using unlink().
Concepts : File Deletion, Linux System Calls.
New      : Introduction to unlink() system call.
Change   : Demonstrates permanent file removal.
---------------------------------------------------------
*/

#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>

int main()
{
    unlink("PPA.txt");

    return 0;
}