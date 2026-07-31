/*
---------------------------------------------------------
Purpose  : Read a larger block of data from a file.
Concepts : read(), Buffer Size, Byte Count.
New      : Effect of changing the number of bytes read.
Change   : Reads seven bytes instead of five.
---------------------------------------------------------
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0, iRet = 0;
    char FileName[20];
    char Data[50];

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