#include<stdio.h>
                  // Print the sum of first Natural Numbers.

int main () {
    printf("enter number :");
    scanf("%d" , &n);

    int sum = 0;
    for(int i=1; i<=5; i++) {
        sum = sum + i; // sum += i
    }

    printf("sum is %d" , i);
    return 0;
}