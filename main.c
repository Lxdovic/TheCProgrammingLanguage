#include <stdio.h>

int main(void) {
    int c, s;
    int blank = 1;
    int t = s = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            t++;
            continue;
        }

        if (c == ' ') {
            s++;
            continue;
        }

        if (c == '\n') {
            if (blank == 0) putchar('\n');

            t = 0;
            s = 0;
            blank = 1;
            continue;
        }


        if (blank == 0) {
            for (int i = 0; i < t; i++)
                putchar('\t');

            for (int i = 0; i < s; i++)
                putchar(' ');
        }

        if (t > 0) t = 0;
        if (s > 0) s = 0;

        blank = 0;

        putchar(c);
    }

    return 0;
}