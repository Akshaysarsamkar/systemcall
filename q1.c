#include<stdio.h>
#include<unistd.h>

void main(){

     int id = fork();

     if(id==0)
        {
            printf("hi\n");
           printf("hi id is :%d\n",getpid());
        }
      else{
       printf("hello word\n");
      printf("process id is :%d\n",getpid());
      }

}
