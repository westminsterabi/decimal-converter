#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "convert.h"


void hex_convert(unsigned char digit)
{
    switch(digit) {
        case 10:
            printf("A");
            return;
        case 11:
            printf("B");
            return;
        case 12:
            printf("C");
            return;
        case 13:
            printf("D");
            return;
        case 14:
            printf("E");
            return;
        case 15:
            printf("F");
            return;
        default:
            printf("%d", digit);
            return;
    }
}

void zeros_hex(unsigned int byte,
               unsigned char base,
               unsigned char count,
               unsigned char places)
{
    if(count == places) {
        return;
    } else {
        int digit;
        digit = (byte % base);
        if(byte < base) {
            zeros_hex(0, base, count + 1, places);
            hex_convert(digit);
            return;
        } else {
            zeros_hex((byte / base), base, count + 1, places);
            hex_convert(digit);
        }
    }
}

/* takes a base-10 8-bit number and converts it to a hex number */
void hex_char(unsigned char byte)
{
    zeros_hex(byte, 16, 0, 2);
}

void hex_int(unsigned int n)
{
    zeros_hex(n, 16, 0, 8);
}

void zeros(int byte, int base, int count, int places)
{
     if(count < places) {
        int digit;
        digit = (byte % base);
        if(byte < base) {
            zeros(0, base, count + 1, places);
            printf("%d", digit);
            return;
        } else {
            zeros((byte / base), base, count + 1, places);
            printf("%d", digit);
        }
    } else {
        return;
    }
}

void octal_char(unsigned char byte)
{
    zeros(byte, 8, 0, 3);
}

void octal_int(unsigned int n)
{
    zeros(n, 8, 0, 11);
}

void binary_char(unsigned char byte)
{
    zeros(byte, 2, 0, 8);
}

void binary_int(unsigned int n)
{
    zeros(n, 2, 0, 32);
}
