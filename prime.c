#include <stdio.h>

int main()
{

    int count = 0, i, num;

    printf("Please enter a number : ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("%d is not a prime number.\n");
        return 0;
    }

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }

    if (count > 0)

        printf("%d this not a prime number.\n", num);

    else
        printf("%d is a prime number.\n", num);

    return 0;
}