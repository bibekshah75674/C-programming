#include <stdio.h>
#include <string.h>

typedef struct ComputerEngineeringStudent{
    char name[100];
    int roll;
    float cgpa;
} coe;

int main(){
    coe s1;
    strcpy(s1.name,"Bibek");
    s1.roll = 3;
    s1.cgpa = 3.3;
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll);
    printf("%f\n",s1.cgpa);
    return 0;
}