#include<stdio.h>
int avg(){
   int a,b,c;
   float d;
printf("enter the nos.\n");
 scanf("%d %d %d\n",&a,&b,&c);
 d=(a+b+c)/3;
 printf("the average is: %f" ,d);
 }



int main()
{
 avg();
    return 0;
}