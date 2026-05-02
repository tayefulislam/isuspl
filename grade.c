#include <stdio.h>

int main()
{
    int M;

    printf("Please enter number between 0-100 :");
    scanf("%d", &M);

    if (M > 100 || M < 0)
        printf("Invalid Number");

    else if (M <= 100 && M >= 80)
        printf("A+");

    else if (M <= 79 && M >= 70)
        printf("A");

    else if (M <= 69 && M >= 60)
        printf("A-");
    else if (M <= 59 && M >= 50)
        printf("B");
    else if (M <= 49 && M >= 40)

        printf("C");
    else if (M <= 39 && M >= 0)
        printf("Fail");
}