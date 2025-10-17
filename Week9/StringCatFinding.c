#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char find[] = "cat";
    char word1[2000];
    scanf("%[^\n]", word1);
    int first = 1;
    for(int i = 0; i < strlen(word1); i++) {
        word1[i] = tolower(word1[i]);
    }

    char *p = word1;
    while((p = strstr(p, find)) != NULL) {
        if (!first) {
            printf(", ");
        }
        printf("%d", p - word1);
        p += strlen(find);
        first = 0;
    }
}