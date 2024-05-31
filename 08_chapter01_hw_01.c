//C program to calculate perimeter of rectangle
#include <stdio.h>

int main(){
    int length,breadth;
    printf("Enter length: \n");
    scanf("%d",&length);

    printf("Enter breadth: \n");
    scanf("%d",&breadth);

    int perimeter;
    perimeter = 2*(length+breadth);
    printf("The area of rectangle is %d",perimeter);

    return 0;
}

