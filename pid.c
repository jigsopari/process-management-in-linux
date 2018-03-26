#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t getpid();
printf("my pid is %d \n ",getpid());
printf("my parent pid is %d \n ", getppid());
return 0;
}
