#include<stdio.h>
                   //  write a program to check if a student passed or failed
                   
int main () {
    printf("enter mnumber (0-100) : ");
    scanf("%d" , &marks);
    if(marks <= 30) {
        printf("FAIL \n");
    } else {
        printf("PASS \n");
    }
    return 0; 
}    