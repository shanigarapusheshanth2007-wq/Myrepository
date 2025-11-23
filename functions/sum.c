#include <stdio.h>
int add(int a, int b)
{
    int k = a + b;
    return k;
}
int main()
{
    int z = add(5, 9);
    printf("%d", z);
    return 0;
}