#include <stdio.h>

int main(void) {
    int c, nc;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while ((nc = getchar()) == ' ')
                ;

            putchar(c);
            putchar(nc);
        }

        else {
            putchar(c);
        }

    }

}

