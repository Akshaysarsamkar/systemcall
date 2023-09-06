#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include <sys/wait.h> 
void main()
{
    fork();
    printf("hello word");
    sleep(10);
    printf("hello word");
}
