/*
---------------------------------------------------------
Purpose  : Safely initialize the read buffer.
Concepts : Character Arrays, Buffer Initialization.
New      : Preventing garbage values using NULL initialization.
Change   : Initializes the character buffer before reading.
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

    printf("Data from file : %s\n",Data);
    
    close(fd);

    return 0;
}