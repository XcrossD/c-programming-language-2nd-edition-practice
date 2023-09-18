#include <stdio.h>

void copyInputToOutput();

int main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}

// copy input to output 2nd version
void copyInputToOutput() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}