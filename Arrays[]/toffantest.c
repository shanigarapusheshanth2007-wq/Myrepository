#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int a[n];
    fgets(a, n, stdin);
    n = sizeof(a) / sizeof(a[0]);
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("the maximum number is:%d\n", max);
    return 0;
}
