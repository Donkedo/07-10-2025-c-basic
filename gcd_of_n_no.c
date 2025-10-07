#include<stdio.h>
int main()
{
    int n,i;
    printf("enter no of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int result = a[0];
    for(i=1;i<n;i++) {
        int x = result, y = a[i];
        while(y != 0) {
            int temp = y;
            y = x % y;
            x = temp;
        }
        result = x;
    }

    printf("the GCD of given numbers is %d\n", result);
    return 0;
}
//problem2