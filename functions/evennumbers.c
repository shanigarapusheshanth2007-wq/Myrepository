#include <stdio.h>
int even(int a[], int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] % 2 == 0)
        {
            ++counter;
        }
    }
    return counter;
}
int main()
{
    int a[5];
    int k = even(a, 5);
    printf("%d", k);
    return 0;
}