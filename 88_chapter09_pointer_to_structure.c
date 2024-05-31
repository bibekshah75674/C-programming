#include <stdio.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1 = {"Bibek",03,7.6};
    printf("name is %s\n",s1.name);

    //now using pointer
    struct student *ptr = &s1;
    printf("student name = %s\n",(*ptr).name);

    //arrow operator
    printf("student->name = %s\n",ptr->name);
    printf("student->roll = %d\n",ptr->roll);
    printf("student->cgpa = %f\n",ptr->cgpa);
    return 0;
}