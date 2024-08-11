#include <stdio.h>

#define MAXLINE 1000

void reverse(char input[]);

int get_line(char s[], int limit);

int main(void) {
    char line[MAXLINE];

    while ((get_line(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
    }
}

void reverse(char input[]) {
    int length = 0;
    int i;

    for (i = 0; input[i] != '\n'; i++)
        length++;

    for (int i = 0; i < length / 2; i++) {
        int tmp = input[i];
        input[i] = input[length - 1 - i];
        input[length - 1 - i] = tmp;
    }
}

int get_line(char s[], int limit) {
    int c = 0;
    int i;

    for (i = 0; i < limit - 1 && (c = getchar()) != '\n' && c != EOF; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}