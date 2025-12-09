#include <stdio.h>

int main() {
    float radius, area;
     float PI = 3.14;  

    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    
    area = PI * radius * radius;

    
    printf("Area of the circle = %f\n", area);

    return 0;
}

