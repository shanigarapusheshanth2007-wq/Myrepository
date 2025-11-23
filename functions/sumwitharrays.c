#include <stdio.h>
int sum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int k = sum(a, 10);
    printf("%d", k);
    return 0;
}