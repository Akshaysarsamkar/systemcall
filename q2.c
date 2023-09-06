#include<stdio.h>
#include<unistd.h>
#include <time.h>
void main(){

   clock_t start= clock();
    sleep(2);
      clock_t end = clock();
     clock_t v = end-start;
   printf("total time taken by process is:%ld\n",v);

}
