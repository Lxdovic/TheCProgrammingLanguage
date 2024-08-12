#include <stdio.h>

int main(void) {
    long long unsigned int max;

    /* characters */
    signed char c;

    for (c = max = 1; c > 0; c *= 2)
        max *= 2;
    printf("signed char        %30i %30llu\n", c, max - 1);

    unsigned char uc;

    for (uc = -1; uc < 0; uc *= 2)
        max *= 2;
    printf("unsigned char      %30i %30u\n", 0, uc);

    /* Integers */
    signed short shrt;

    for (shrt = max = 1; shrt > 0; shrt *= 2)
        max *= 2;
    printf("signed short       %30i %30llu\n", shrt, max - 1);

    unsigned short uShrt;

    for (uShrt = -1; uShrt < 0; uShrt *= 2)
        max += uShrt;
    printf("unsigned short     %30i %30u\n", 0, uShrt);

    signed int i;

    for (i = max = 1; i > 0; i *= 2)
        max *= 2;
    printf("signed int         %30i %30llu\n", i, max - 1);

    unsigned int ui;

    for (ui = -1; ui < 0; ui *= 2);
    printf("unsigned int       %30u %30u\n", 0, ui);

    signed long int li;

    for (li = max = 1; li > 0; li *= 2)
        max *= 2;
    printf("signed long        %30li %30llu\n", li, max - 1);

    unsigned long int uli;

    for (uli = -1; uli < 0; uli *= 2);
    printf("unsigned long      %30u %30lu\n", 0, uli);

    signed long long lli;

    for (lli = max = 1; lli > 0; lli *= 2)
        max *= 2;
    printf("signed long long   %30lli %30llu\n", lli, max - 1);

    unsigned long long ulli;
    for (ulli = -1; ulli < 0; ulli *= 2);
    printf("unsigned long long %30i %30llu\n", 0, ulli);
}