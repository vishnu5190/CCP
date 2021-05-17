#include<stdio.h>

int main() {
float fahrenheit;
   float celsius;
   
    printf("Enter temperature value  (in Fahrenheit): ");
    
    scanf("%f", &fahrenheit);

     celsius = (5.0/9.0)*(fahrenheit-32);

    printf("temperature in Fahrenheit: %f", fahrenheit);
    printf("\ntemperature in Celsius: %f\n", celsius);

    return 0;
}
