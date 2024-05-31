#include <stdio.h>

int main(){
    int rows;
    rows = 4;

    int cols;
    
    int count;
    count = 1;

    for(rows = 1;rows <= 4;rows++){
        for(cols = 1;cols <= rows;cols++){
            printf("%d ",count++);
        }
        printf("\n");
    }
    return 0;
}