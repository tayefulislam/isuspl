#include <stdio.h>

int main()
{

    int a[5] = {3, 6, 7, 3, 7};
    int i;
    for (i = 0; i < 5; i++)
    {

        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}