#include <stdio.h>

int main() {
    float x, y, average;

   
    printf("Enter first number: ");
    scanf("%f", &x);

    printf("Enter second number: ");
    scanf("%f", &y);

  
    average = (x+ y) / 2;

   
    printf("Average = %.2f\n", average);

    return 0;
}

