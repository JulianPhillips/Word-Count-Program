#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    int tot_chars = 0;    
    int tot_lines = 0;     
    int tot_words = 0;     
    int boolean;
    int n;
    while ((n = getchar()) != EOF) {
        tot_chars++;
        if (isspace(n) && !isspace(getchar())) {
            tot_words++;
        }
        if (n == '\n') {
            tot_lines++;
        }
        if (n == '-') {
            tot_words--;
        }
    }
    printf("Lines, Words, Characters\n");
    printf(" %3d %3d %3d\n", tot_lines, tot_words, tot_chars);
    return 0;
}