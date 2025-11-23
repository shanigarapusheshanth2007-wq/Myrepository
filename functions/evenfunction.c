#include <stdio.h>
void isEven(int a)
{

    if (a % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");
}
int main()
{

    isEven(5);
    return 0;
}