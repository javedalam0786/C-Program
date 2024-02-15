#include<stdio.h>
                        // write program to finf Prime Number a Range.
int isprime(int x) {
    int prime = 1;
    for(int i = 2 ; i < x;i++) {
        if((x % i) == 0) {
            prime = 0;
            break;
        }
    }
    return prime;
}
int main() {
    for(int i=1; i<21; i++) {
        if(isprime(i)) {
            printf("%d", i);
        }
    }
    return 0;
}