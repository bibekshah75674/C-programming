#include <stdio.h>
#include <string.h>

//struct is a user-defined data types
struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    strcpy(s1.name,"Bibek");
    s1.roll = 03;
    s1.cgpa = 3.33;
    printf("Student name = %s\n",s1.name);
    printf("student roll no = %d\n",s1.roll);
    printf("student cgpa = %f",s1.cgpa);
    return 0;
}