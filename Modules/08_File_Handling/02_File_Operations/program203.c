/*
---------------------------------------------------------
Purpose  : Write data into an existing file.
Concepts : write(), File Descriptor, System Calls.
New      : Introduction to write() system call.
Change   : Writes a fixed number of bytes into a file.
---------------------------------------------------------
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0, iRet = 0;
    char FileName[20];
    char Data[] = "India is my country";

    printf("Enter the name of file : \n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open\n");
        return -1;
    }

    iRet = write(fd,Data,11);

    printf("%d bytes gets succesfully written\n",iRet);

    close(fd);

    return 0;
}