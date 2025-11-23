#include <stdio.h>

int pali(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int j = n % 10;
        sum = sum * 10 + j;  // <-- FIXED
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n == pali(n))
        printf("pali");
    else
        printf("no");

    return 0;
}
