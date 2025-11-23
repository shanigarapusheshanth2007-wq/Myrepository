#include <stdio.h>
int max(int a, int b)
{
    int max;

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}
int main()
{
    int k = max(1, 4);
    printf("%d", k);
    return 0;
}