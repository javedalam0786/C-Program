#include<stdio.h>
                   // write a program to find if a character entered by user is case or not

int main () {
    char ch ;
     printf("enter character :");
     scanf("%c" ,&ch);
     if(ch >= 'A' && ch <= 'Z') {
        printf("upper case");
     }
     else if (ch >= 'a' && ch <= 'Z') {
        printf("lower case \n");
     }
     else {
        printf("not english letter \n");
     }
     return 0;
}