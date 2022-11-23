//
// Created by Avichai Mizrachi and Stav Avitan on 22/11/2022.
//

#include "NumClass.h"
#include <stdio.h>

/* will return if a number is prime*/
int isPrime(int num) {
    if(num == 1){
        return 1;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

/*Strong number is a special number whose sum of the factorial of digits is equal to the original number.
 * For Example: 145  is strong number
 * 1! + 4! + 5! = 145
 * multi is a function that multiply a number from 1 until himself*/

int multi(int num) {
    int sum = 1;
    for (int i = 1; i <= num; i++) {
        sum = sum * i;
    }
    return sum;

}

int isStrong(int num) {
    int temp = num, sum = 0, tempNum;
    while (temp != 0) {
        tempNum = temp % 10;
        int mul = multi(tempNum);
        temp /= 10;
        sum = sum + mul;
    }
    if (sum == num) {
        return 1;
    }
    return 0;
}