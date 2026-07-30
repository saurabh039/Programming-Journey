/*
---------------------------------------------------------
Purpose  : Open an existing file using open().
Concepts : open(), File Descriptor, O_RDWR.
New      : Introduction to opening existing files.
Change   : Demonstrates file opening instead of creation.
---------------------------------------------------------
*/

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[20];

    printf("Enter the name of file that you want open : \n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File succesfully opened with fd : %d\n",fd);
    }
    
    return 0;
}