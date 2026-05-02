#include <stdio.h>
#define MAX 10

int main()
{
    int a[MAX] = {3, 4, 5, 76, 8, 76};
    int i;
    for (i = 0; i < MAX; i++)
    {
        // a [0] = 3 (a[i])
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}