//
// Created by Avichai Mizrachi and Stav Avitan on 22/11/2022.
//

#include <math.h>
#include "NumClass.h"
#include <stdio.h>

/* will return if a number is Armstrong number
 * An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
 * For Example: 407  = 43 + 03 + 73  = 64 + 0 + 343  = 407 */

int isarmstrong(int num, int n) {
    if (num > 0)
        return (pow(num % 10, n) + isarmstrong(num / 10, n));
    return 0;
}

int isArmstrong(int num) {
    int n = 0, temp = num;
    while (temp > 0) {
        n++;
        temp /= 10;
    }
    temp = num;
    if (num == isarmstrong(temp, n)) {
        return 1;
    }
    return 0;
}

/* will return if a number is a palindrome */

int countDigits(int num){
    int count=0;
    while(num>0){
        count++;
        num/=10;
    }
    return count;
}
int reverse(int num){
    int size=countDigits(num);
    if(size==0){
        return 0;
    }
    return((num%10*pow(10,size))+reverse(num/10));
}
int isPalindrome(int num){
    int rev=reverse(num);
    rev/=10;
    if(rev==num){
        return 1;
    }
    return 0;
}