#include<stdio.h>
                  // Keep taking numbers as input from user unit user enters an odd number.

int main () {
    int n;
    do {
        printf("enter number : ");
        scanf("%d" , &n);
        printf("%d\n" , n);
        if(n % 2 !=0) {
            break;
        }
    } while (1);
    printf("thank you");

    return 0;
}