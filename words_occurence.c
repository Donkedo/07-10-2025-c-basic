#include<stdio.h>
#include<string.h>
int main()
{
    char word[]="aaman";
    char a[50];
    int i,j,count=0;
    printf("enter the string: ");
    fgets(a,sizeof(a),stdin);
    for(i=0; a[i+4]!='\0'; i++)
{
        if(a[i]==word[0] && a[i+1]==word[1] && a[i+2]==word[2] && a[i+3]==word[3] && a[i+4]==word[4]){
            count++;
        }   
    }
    printf("%d\n",count);
    return 0;}