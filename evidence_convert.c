#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "convert.h"

void evidence_hex_char()
{
    printf("*** testing hex_char\n");
    printf("- expecting 10: "); hex_char(16); printf("\n");
    printf("- expecting 20: "); hex_char(32); printf("\n");
    printf("- expecting 0A: "); hex_char(10); printf("\n");
    printf("- expecting 80: "); hex_char(128); printf("\n");
}

void evidence_hex_int()
{
    printf("*** testing hex_int\n");
    printf("- expecting 00000010: "); hex_int(16); printf("\n");
    printf("- expecting 00000020: "); hex_int(32); printf("\n");
    printf("- expecting 0000000A: "); hex_int(10); printf("\n");
    printf("- expecting 00000080: "); hex_int(128); printf("\n");
    printf("- expecting 0005472F: "); hex_int(345903); printf("\n");
}

void evidence_octal_char()
{
    printf("*** testing octal_char\n");
    printf("- expecting 020: "); octal_char(16); printf("\n");
    printf("- expecting 040: "); octal_char(32); printf("\n");
    printf("- expecting 012: "); octal_char(10); printf("\n");
    printf("- expecting 200: "); octal_char(128); printf("\n");
}

void evidence_octal_int()
{
    printf("*** testing octal_int\n");
    printf("- expecting 00000077260: "); octal_int(32432); printf("\n");
    printf("- expecting 00000055577: "); octal_int(23423); printf("\n");
    printf("- expecting 00004554601: "); octal_int(1235329); printf("\n");
    printf("- expecting 17777777777: "); octal_int(2147483647); printf("\n");
}

/* main: run the evidence functions above */
int main(int arc, char *argv[])
{
    evidence_hex_char();
    evidence_hex_int();
    evidence_octal_char();
    evidence_octal_int();
    return 0;
}
