#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
pid_t pid;
pid=fork();
if(pid > 0)
 printf("I am the parent process %d \n", pid);
else if (!pid)
 printf("i am the child %d \n ",pid);
else if (pid == -1)
 perror("fork");

return 0;
}

