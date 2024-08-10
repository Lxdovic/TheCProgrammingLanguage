#include <stdio.h>

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            default:
                putchar(c);
                break;
        }
    }

    return 0;
}

