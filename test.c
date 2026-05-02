#include <stdio.h>

int main()
{

    int a, b, sum;

    printf("Please enter the value of a :");
    scanf("%d", &a);
    printf("Please enter the value of b : ");
    scanf("%d", &b);

    sum = a + b;
    printf("The result is %d of %d + %d", sum, a, b);

    return 0;
}