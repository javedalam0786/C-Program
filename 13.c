#include<stdio.h>
                     // write a program to given grades to a studentgcc
                    
int main () {
    int marks ;
    printf("enter number (0-100) : ");
    scanf("%d" , &marks);
    if(marks < 30) {
        printf("c \n");
    }
    else if (marks >=30 && marks < 70) {
        printf("B \n");
    }
    else if (marks >=70 && marks < 90) {
        printf("A \n");
    }
    else {
    printf("A+ \n");
    }
    return 0;
}                    