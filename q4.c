#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
     pid_t p;
     p=fork();
     if(p>0) 
     {
         exit(0);
         printf("I am parent having PID %d\n",getpid());
         printf("My parent PID is %d\n",getppid());
     }
     else 
     {
         sleep(5);
         printf("I am child having PID %d\n",getpid());
         printf("My child PID is %d\n",p);
        
     }
 }
