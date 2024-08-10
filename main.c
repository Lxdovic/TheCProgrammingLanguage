#include <stdio.h>

int main(void) {
    int c, l;
    int freq[26];

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            l = c - 'a';
            freq[l]++;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%c: ", 'a' + i);


        for (int j = 0; j < freq[i]; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;

}

