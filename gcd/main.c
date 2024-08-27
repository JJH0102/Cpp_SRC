#include <stdio.h>
#include "gcd.h"

int main()
{
    int a, b;
    int result;

    scanf("%d %d", &a, &b);

    result = gcd(a, b);

    printf("result : %d\n", result);

    return 0;
}