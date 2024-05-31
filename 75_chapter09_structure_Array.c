#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student IT[100];
    strcpy(IT[0].name,"Bibek");
    IT[0].roll = 1;
    IT[0].cgpa = 6;
    printf("first student name = %s\n",IT[0].name);
    printf("first student roll = %d\n",IT[0].roll);
    printf("first student cgpa = %f\n",IT[0].cgpa);

    strcpy(IT[1].name,"Rinchhen");
    IT[1].roll = 4;
    IT[1].cgpa = 8.0;
    printf("second student name = %s\n",IT[1].name);
    printf("second student roll = %d\n",IT[1].roll);
    printf("Second student cgpa = %f\n",IT[1].cgpa);

    return 0;
}