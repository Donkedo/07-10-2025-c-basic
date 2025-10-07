#include <stdio.h>

int main() {
    int n, i, j, count;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count = 0;
            for (j = 1; j <= i; j++) {
                if (i % j == 0) {
                    count++;
                }
            }
            if (count == 2) {
                printf("the prime factors of %d is/are %d\n",n,i);
            }
        }
    }

    return 0;
}
