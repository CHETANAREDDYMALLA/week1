#include <stdio.h>

int main() {
    float side, area;

    
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    area = side * side;

    
    printf("Area of the square = %f\n", area);

    return 0;
}

