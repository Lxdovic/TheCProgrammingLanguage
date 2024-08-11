#include <stdio.h>

#define MIN 81

int _getline(char s[], int min);

int main(void) {
    int len;
    int c;
    char line[MIN];

    while ((len = _getline(line, MIN)) > 0) {
        if (len < MIN) continue;

        for (int i = 0; i < len; i++) {
            putchar(line[i]);
        }

        while ((c = getchar()) != EOF) {
            putchar(c);

            if (c == '\n') break;
        }
    }

    return 0;
}

int _getline(char s[], int min) {
    int c, i;
    for (i = 0; i < min && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    return i;
}
