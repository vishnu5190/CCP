#include<stdio.h>
#include<math.h>
float area(){
    float a,b,c,d,s;
    printf("Enter the sides of trinagle:\n");
    scanf("%f %f %f\n" ,&a,&b,&c);
    s=(a+b+c)/2;
    d=sqrt(s*(s-a)(s-b)(s-c));
    printf("The area of triangle is:%f",d);
    
}





int main()
{
   area();
    return 0;
}