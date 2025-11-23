#include <stdio.h>
char greet(char name[])
{
    printf("hello %s", name);
    return 0;
}
int main()
{
    char name[100];
    scanf("%99s", name);//here we have used 99 before a string because the last term is /0 and we shoulf hold it as 100 th element
    greet(name);
    return 0;
}