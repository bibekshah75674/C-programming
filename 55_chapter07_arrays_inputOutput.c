#include <stdio.h>

int main(){
    int marks[3];
    printf("Enter mark of Digital Logic:");
    scanf("%d",&marks[0]);

    printf("Enter mark of Maths:");
    scanf("%d",&marks[1]);    

    printf("Enter mark of IIT:");
    scanf("%d",&marks[2]);

    printf("Digital Logic = %d,Maths = %d,IIT = %d",marks[0],marks[1],marks[2]);
    return 0;
}


