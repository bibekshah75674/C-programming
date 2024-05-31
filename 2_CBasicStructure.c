#include <stdio.h>
#define PI 3.14

//function declaration/prototype
float area(float r);

int main() {
    float a,r;
    printf("Enter the radius of a circle:\n");
    scanf("%f",&r);
    a = area(r);
    printf("The area of circle is %f",a);
    return 0;
}

//function definition
float area(float r){
    float ar;
    ar = PI * r * r;
    return ar;
}



