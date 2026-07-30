/*
---------------------------------------------------------
Purpose  : Create a new file using the creat() system call.
Concepts : Linux File Handling, System Calls, File Descriptor.
New      : Introduction to creat() for file creation.
Change   : First program demonstrating file creation in Linux.
---------------------------------------------------------
*/
#include<stdio.h>
#include<fcntl.h>


int main()
{
    int fd = 0;

    fd = creat("PPA.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File succesfully created\n");
    }

    return 0;
}