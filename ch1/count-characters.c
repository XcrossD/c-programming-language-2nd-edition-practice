#include <stdio.h>

void countCharactersV2();

int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}

// count characters in input 2nd version
void countCharactersV2()
{
    double nc;
    
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}

/*
Note:
To reach EOF on windows subsystem linux ubuntu you need to input Ctrl-D twice
Ref - https://stackoverflow.com/questions/12134756/character-counter-from-the-c-programming-language-not-working-as-i-expected
*/