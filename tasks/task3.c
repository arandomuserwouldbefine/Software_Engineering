#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
    int choice;
    float radius, length, width, area;

    printf("=============Area Finder=============\n");
    printf("\t1. Circle\n\t2. Triangle\n\t3. Rectangle\n");
    
    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Code for Circle
            printf("Enter radius: ");
            scanf("%f", &radius);

            area = PI * radius * radius;

            printf("Area of Circle: %f\n", area);
            break;
        case 2:
            // Code for Triangle
            printf("Enter base length: ");
            scanf("%f", &length);

            printf("Enter height: ");
            scanf("%f", &width);

            area = 0.5 * length * width;

            printf("Area of Triangle: %f\n", area);
            break;
        case 3:
            // Code for Rectangle
            printf("Enter length: ");
            scanf("%f", &length);

            printf("Enter width: ");
            scanf("%f", &width);

            area = length * width;

            printf("Area of Rectangle: %f\n", area);
            break;
        default:
            printf("Invalid Choice\n");
            break;
    }

    printf("\n>>>>>>>>>>>>>Thank You\n");

    return 0;
}
