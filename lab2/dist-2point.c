#include <stdio.h>
#include <math.h>

int main() {
 int x1, y1;
  int x2, y2;  
    
    printf("Enter the coordinates of the first point: ");
   
    scanf("%d %d", &x1, &y1);

    printf("Enter the coordinates of the second point: ");
    
    scanf("%d %d", &x2, &y2);

    double distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("Distance between the two points is: %lf\n", distance);

    return 0;
}
