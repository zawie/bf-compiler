#include <stdio.h>

#define NUM_CHARS 256

enum IR {
    CMT = 0,
    INC = 1,
    DEC = 2,
    ADD = 3,
    SUB = 4,
    OUT = 5,
    INP = 6,
    SRT = 7,
    END = 8,
}; 

static int charToIR[NUM_CHARS];

#define CHAR_TO_IR(character) (charToIR[(int) character])
#define SET_CHAR_IR(character, ir) (charToIR[(int) character] = ir)

int main() {

    /*
    Initialize scanner
    */
    SET_CHAR_IR('>', INC);
    SET_CHAR_IR('<', DEC);
    SET_CHAR_IR('+', ADD);
    SET_CHAR_IR('-', SUB);
    SET_CHAR_IR('.', OUT);
    SET_CHAR_IR(',', INP);
    SET_CHAR_IR('[', SRT);
    SET_CHAR_IR(']', END);

    printf("Hello, World!");
    return 0;
}