#include <stdio.h>

int main(void) {
    int c;
    while ((c = getchar()) != EOF) {
        if ((c != EOF) == 0 || (c != EOF) == 1) {
            putchar(c);
        }
    }
}

