#include<stdio.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
char ch;
int fd;
fd=open(argv[1],O_RDONLY);
if(fd==-1)
{
printf("file not opened");
}
printf("no of argumnets %d",argc);
while(read(fd,&ch1)
{
putchar(ch);
close(fd);
return 0;
}