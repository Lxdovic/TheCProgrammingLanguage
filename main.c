#include <stdio.h>

int main(void) {
    int b = 0;
    int tab = 0;
    int nl = 0;
    int c;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\t':
                ++tab;
                break;
            case ' ':
                ++b;
                break;
            case '\n':
                ++nl;
                break;
            default:
                break;
        }
    }

    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", b, tab, nl);
}

