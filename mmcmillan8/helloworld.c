//CSc 3320 T/Th Assignment 6
//helloworld.c

#include <stdio.h>

int main() {
    printf("Hello World!\n");
    printf("(And there's an Extra Credit explanation in the source.\n");
}

// And here's my attempt at the EC work.
// Dr Harrison's hello.c file contains the hex values (in reverse order) for each of the letters in "hello world", 
// two per line, including a space and a line feed.  This explains the need for a loop of six iterations (12/2 = 6).  
// The letters are in reverse order, such as "eh", "lr", and so on.  Each letter is followed by an equation which
// converts the hex to float (e.g. 68 turns into 104) and marks the line as positive or negative (the first is 
// different from the last 5), with negative lines being reversed.  The print line handles the right shift to create
// the characters that are printed in their correct order.
