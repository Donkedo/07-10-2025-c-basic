#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    char b[52] = {
        'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
        'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
    };
    int freq[52] = {0};
    int i, j;

    printf("Enter the string: ");
    fgets(a, sizeof(a), stdin);
    for (i = 0; a[i] != '\0'; i++) {
        for (j = 0; j < 52; j++) {
            if (a[i] == b[j]) {
                freq[j]++;
            }
        }
    }
    for (j = 0; j < 52; j++) {
        if (freq[j] > 0) {
            printf("The frequency of alphabet %c is %d\n", b[j], freq[j]);
        }
    }

    return 0;
}
