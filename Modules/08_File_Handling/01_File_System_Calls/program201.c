/*
---------------------------------------------------------
Purpose  : Open and properly close a file.
Concepts : open(), close(), Resource Management.
New      : Safe handling of file descriptors.
Change   : Introduces close() after successful file access.
---------------------------------------------------------
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

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
    
    close(fd);

    return 0;
}