#include <stdio.h>
#include <string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    strcpy(s1.name,"Bibek shah");
    s1.roll = 45;
    s1.cgpa = 7.5;
    printf("Student name = %s\n",s1.name);
    printf("Student roll = %d\n",s1.roll);
    printf("Student cgpa = %f\n",s1.cgpa);

    struct student s2;
    strcpy(s2.name,"Ayush");
    s2.roll = 43;
    s2.cgpa = 7.5;
    printf("Student name = %s\n",s2.name);
    printf("Student roll = %d\n",s2.roll);
    printf("Student cgpa = %f\n",s2.cgpa);
    
    struct student s3;
    strcpy(s3.name,"Sanket");
    s3.roll = 22;
    s3.cgpa = 2.9;
    printf("student name = %s\n",s3.name);
    printf("student roll = %d\n",s3.roll);
    printf("student cgpa = %f\n",s3.cgpa);

    return 0;
}
   
