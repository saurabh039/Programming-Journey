/*
---------------------------------------------------------
Purpose  : Display file data using write().
Concepts : write(), Standard Output, File I/O.
New      : Writing directly to stdout using file data.
Change   : Replaces printf() with write() for output.
---------------------------------------------------------
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0, iRet = 0;
    char FileName[20];
    char Data[50] = {'\0'};

    printf("Enter the name of file : \n");
    scanf("%s",FileName);

    fd = open(FileName, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open\n");
        return -1;
    }

    iRet = read(fd,Data,7);

    printf("%d bytes gets succesfully read\n",iRet);

    printf("Data from file \n");

    write(1, Data, iRet);
    
    printf("\n");
    
    close(fd);

    return 0;
}