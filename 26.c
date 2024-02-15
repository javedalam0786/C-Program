#include<stdio.h>
                  // Keep taking numbars as input from user unit user enter a number which is multiple of 7.

int main () {
    int n;
    do {
        printf("enter number : ");
        scanf("%d" , &n);
        printf("%d\n" , n);

        if(n % 7 == 0) {    // multiple of 7
            break;
        }
    } while (1);
    printf("thank you \n ");

    return 0;
}