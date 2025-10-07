#include<stdio.h>
int main()
{
    char a[50];
    int i,count=0;
    printf("enter the string: ");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            count++;
        }
    }
    printf("no of vovels in string is %d",count);
    return 0;
}