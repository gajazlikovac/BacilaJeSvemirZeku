

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// ------------------------------------------------ -----------------------------
// Hw1.c
//
// asa jebem ti nedlju
//
// Group: 5 Christoph Maurer
//
// Authors: Stefan Gajanovic 1431869
//
// Latest Changes: 13.11.2015 (by Stefan Gajanovic)
// ------------------------------------------------ -----------------------------


typedef union Test_
{
    short short_value;
    char  byte[2];
} Test;

int main()
{
    Test test = { 0x1234 };  // initializes first member
    printf("Bytes = %x %x\n", test.byte[0], test.byte[1]);
    printf("Byte-Order = %s\n", test.byte[0] == 0x12 ?
           "big-endian" : "little-endian");
    return 0;
}