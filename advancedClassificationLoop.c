//
// Created by Avichai Mizrachi and Stav Avitan on 22/11/2022.
//

#include <stdio.h>
#include <math.h>
#include "NumClass.h"

/* will return if a number is Armstrong number
 * An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
 * For Example: 407  = 43 + 03 + 73  = 64 + 0 + 343  = 407 */

int isArmstrong(int num) {
    int sum = 0, n = 0, temp = num;
    while (temp > 0) {
        n++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) {
        sum = sum + pow((temp % 10), n);
        temp /= 10;
    }
    if (num == sum) {
        return 1;
    }
    return 0;
}

/* will return if a number is a palindrome */

int isPalindrome(int num) {
    int sum = 0, temp = num, a;
    while (temp > 0) {
        a = temp % 10;
        sum = (sum * 10) + a;
        temp /= 10;
    }
    if (sum == num) {
        return 1;
    }
    return 0;
}