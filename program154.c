/*
    create new file

int creat(char + File_Name, int permission)
File_name : name of file u want to create
permission : permission of new file(0777)

return value : on sucess >= 0
on failure it returns -1

*/

#include<stdio.h>
#include<fcntl.h>
//#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter the file name that u want to create\n");
    scanf("%s",Fname);
    
    fd = creat(Fname, 0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }
    else
    {
        printf("File successfully created\n");
    }

    return 0;
}