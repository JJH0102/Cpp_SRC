#include "gcd.h"

int gcd(int a, int b)
{
    int remain;

    while (remain = a % b) {
        a = b;
        b = remain;
    }

    return b;
}


/*
int gcd(int a, int b)
{
    int result = 1;
    
    if (b > a) {
        int tmp = a;
        a = b;
        b = tmp; 
    }

    for (int i = 1; i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            result = i;
        }
    }

    return result;
}
*/