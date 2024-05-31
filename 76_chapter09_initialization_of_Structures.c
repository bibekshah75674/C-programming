#include <stdio.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"Bibek",20,4.0};
    struct student s2 = {"Rinchhen",19,8.0};
    struct student s3 = {0};
    printf("student name = %s\n",s1.name);
    printf("student cgpa = %f\n",s2.cgpa);
    printf("student roll = %d\n",s3.roll);
    return 0;
}