#include <stdio.h>
int square(int a)
{
    return a * a; // we can put here like int n=a*a return n
}
int main()
{
    int k = square(9);
    printf("%d", k);
    return 0;
}