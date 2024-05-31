//C program to calculate area of a circle
#include <stdio.h>

int main(){
    float radius;
    printf("Enter the radius of the circle: \n");
    scanf("%f",&radius);

    float pi = 3.14;

    float area;
    area = pi * radius * radius;

    printf("The area of circle is %f", area);

    return 0;
}
