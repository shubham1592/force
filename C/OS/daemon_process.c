#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
int main()
{
pid_t fr = fork();
if (fr == 0)
{
sleep(10);
printf("Background process comes to foreground with this print");
}
else{
if(fr > 0){
exit(0);
}}}

