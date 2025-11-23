#include <stdio.h>
int fact(int a)
{
    int fact = 1;
    for (int i = 2; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{

    int k = fact(5);
    printf("%d", k);
    return 0;
}