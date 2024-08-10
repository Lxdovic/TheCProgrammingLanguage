#include <stdio.h>

int main(void) {
    int c, l;
    int lengths[10];

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (l > 0 && l < 10) {
                lengths[l]++;
            }

            l = 0;
            continue;
        }

        l++;
    }

    if (l > 0 && l < 10) {
        lengths[l]++;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d: ", i);
        for (int j = 0; j < lengths[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;

}

