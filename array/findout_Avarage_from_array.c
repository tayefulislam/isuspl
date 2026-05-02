#include <stdio.h>

int main()
{
    int num[5];
    int i, sum = 0, avg;

    // Take input from user
    for (i = 0; i < 5; i++)

    {
        printf("Please enter marks :");
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }

    avg = sum / 5;
    printf("Total AVG is : %d .", avg);
}