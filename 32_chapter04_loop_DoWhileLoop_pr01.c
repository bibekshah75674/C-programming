#include <stdio.h>

int main() {
    int n;
    printf("Enter a natural number:\n");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("Sum is %d\n",sum);
    return 0;
}