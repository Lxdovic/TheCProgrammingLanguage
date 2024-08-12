#include <stdio.h>

void print_char_range();

void print_short_range();

void print_int_range();

int main(void) {
    // for some reason I cant explain for now, separating these in different functions
    // seems to make them break.

    // print_char_range();
    unsigned char ucharMin;
    unsigned char ucharMax;

    for (ucharMin = 0; ucharMin >= 0; ucharMin++) {
        if (ucharMax - ucharMin > 1) break;

        ucharMax = ucharMin;
    }

    printf("unsigned char -> min: %i, max: %i\n", ucharMin, ucharMax);

    char charMin;
    char charMax;

    for (charMin = 0; charMin >= 0; charMin++) {
        if (charMax - charMin > 1) break;

        charMax = charMin;
    }

    printf("signed char -> min: %i, max: %i\n", charMin, charMax);

    // print_short_range();
    unsigned short ushortMin;
    unsigned short ushortMax;

    for (ushortMin = 0; ushortMin >= 0; ushortMin++) {
        if (ushortMax - ushortMin > 1) break;

        ushortMax = ushortMin;
    }

    printf("unsigned short -> min: %i, max: %i\n", ushortMin, ushortMax);

    short shortMin;
    short shortMax;

    for (shortMin = 0; shortMin >= 0; shortMin++) {
        if (shortMax - shortMin > 1) break;

        shortMax = shortMin;
    }

    printf("signed short -> min: %i, max: %i\n", shortMin, shortMax);

    // print_int_range();
    unsigned int uintMin;
    unsigned int uintMax;

    for (uintMin = 0; uintMin >= 0; uintMin++) {
        if (uintMax - uintMin > 1) break;

        uintMax = uintMin;
    }

    printf("unsigned int -> min: %i, max: %i\n", uintMin, uintMax);

    int intMin;
    int intMax;

    for (intMin = 0; intMin >= 0; intMin++) {
        if (intMax - intMin > 1) break;

        intMax = intMin;
    }

    printf("signed int -> min: %i, max: %i\n", intMin, intMax);

    return 0;
}

void print_char_range() {
}

void print_short_range() {
}

void print_int_range() {
}


