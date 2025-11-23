#include <stdio.h>
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {

        scanf("%d", &a[i]);
    }
    int k;
    k = max(a, 10);
    printf("%d", k);
    return 0;
}