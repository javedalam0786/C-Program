#include<stdio.h>

int main () {
    printf("enter number :");
    scanf("%d" , &n);

    int sum = 0;
    for(int i=1, j=n; i<=n && j>=1; i++, j--) {
        sum = sum + i;    // sum += i
        printf("%d\n" , j);
    }
    printf("sum is %d\n" , sum);
    return 0;
}