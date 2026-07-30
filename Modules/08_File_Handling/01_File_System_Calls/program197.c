/*
---------------------------------------------------------
Purpose  : Create a file and display its file descriptor.
Concepts : File Descriptor, creat(), Return Values.
New      : Understanding that every opened file gets a unique descriptor.
Change   : Displays the file descriptor returned by creat().
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
        printf("File succesfully created with fd : %d\n",fd);
    }

    return 0;
}