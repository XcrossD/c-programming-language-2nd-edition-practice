#include <stdio.h>

#define MAXLINE 1000

/*
getline is a GNU/POSIX extension so it is already defined somewhere in stdio.h
either rename getline function or compile it with -ansi flag or -std=c89 flag
ref: https://stackoverflow.com/questions/8763052/why-do-i-get-a-conflicting-types-for-getline-error-when-compiling-the-longest
*/
int customgetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while ((len = customgetline(line, MAXLINE)) > 0) 
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s\n", longest);
    return 0;
}

int customgetline(char s[], int lim)
{
    int i, c;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}