/*
* From octal to decimal and vice versa 
* This code sucks, compile it with "gcc main.c -o main -lm"
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int octalToDecimal(void);
int decimalToOctal(void);


int main(void) {
    char choice;

    printf("1)Octal => Decimal\n2)Decimal => Octal\n3)exit\n\n$ ");
    scanf("%c", &choice);

    switch (choice) {
    case '1':
        octalToDecimal();
    break;
    case '2':
        decimalToOctal();
    break;
    case '3':
        exit(0);
    }
}


int octalToDecimal(void) {
    int o;
    int d = 0;
    int i = 0;

    printf("\nInsert your octal value: "); scanf("%d", &o);
    
    int o_riginal;
    o_riginal += o;

    while(o != 0) {
        d += (o % 10) * pow(8, i);
        o /= 10;
        ++i;
    }
    printf("Decimal value of %d is: %d\n\n", o_riginal, d);
    return 0;
}


int decimalToOctal(void) {
    int o = 0;
    int d;
    int i = 1;

    printf("\nInsert your decimal value: "); scanf("%d", &d);

    int d_original;
    d_original += d;

    while(d != 0) {
        o += (d % 8) * i;
        d /= 8;
        i *= 10;
    }
    printf("Octal value of %d is: %d\n\n", d_original, o);
    return 0;
}