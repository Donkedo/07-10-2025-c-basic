#include <stdio.h>
#include<string.h>
int main()
{
    char a[50],c[50];
    printf("enter the string: ");
    scanf("%s", a);
    int b = strlen(a);
    for (int i = 0; i < b; i++)
    {
        c[i] = a[b - i-1];
    }
    c[b] = '\0';
    int d = strcmp(a,c);
    if (d == 0)
    {
        printf("str is palindrome");
    }
    else
    {
        printf("str is not palindrome");
    }
return 0;}