#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
execl("/usr/bin/vi","vi","created_file",(char *) NULL);
return 0;
}

