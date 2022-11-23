//
// Created by Avichai Mizrachi and Stav Avitan on 22/11/2022.
//

#include <stdio.h>
#include "NumClass.h"

int main() {
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    printf("The Armstrong numbers are:");
    for (int i = num1; i < num2; i++) {
        if (isArmstrong(i) == 1) {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Palindrome numbers are:");
    for (int i = num1; i < num2; i++) {
        if (isPalindrome(i) == 1) {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Prime numbers are:");
    for (int i = num1; i < num2; i++) {
        if (isPrime(i) == 1) {
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Strong numbers are:");
    for (int i = num1; i < num2; i++) {
        if (isStrong(i) == 1) {
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}