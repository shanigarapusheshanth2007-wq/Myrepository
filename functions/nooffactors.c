#include <stdio.h>
int nooffactors()
{
    int n;
    printf("Enter a value");
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int k = nooffactors();
    printf("%d", k);
    return 0;
}