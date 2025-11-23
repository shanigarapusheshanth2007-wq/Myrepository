#include <stdio.h>
int stringlength(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }
    return i;
}
int main()
{
    char a[100];
    scanf("%s",s)
    int k = stringlength(a);
    printf("%d", k);
    return 0;
}