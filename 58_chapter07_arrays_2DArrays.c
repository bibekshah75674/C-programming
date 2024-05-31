#include <stdio.h>

int main(){
    int marks[2][3];
    marks[0][0] = 45;
    marks[0][1] = 87;
    marks[0][2] = 93;

    marks[1][0] = 34;
    marks[1][1] = 84;
    marks[1][2] = 92;

    printf("The marks of first student in three subjects are %d,%d,and %d.\n",marks[0][0],marks[0][1],marks[0][2]);
    printf("The marks of second student in three subjects are %d,%d,and %d.",marks[1][0],marks[1][1],marks[1][2]);
    return 0;
}