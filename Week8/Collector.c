#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL, chr;
    int size = 0;
    int cap = 10;

    str = (char*)malloc(cap*sizeof(char));

    while (1) {
        scanf(" %c", &chr);
        if (chr == '-') break;
        if (size >= cap) {
            cap *= 2;
            char *temp = (char*) realloc(str, cap*sizeof(char));
            str = temp;
        }

        *(str+size) = chr;
        size++;
    }

    char *ptr = str;
    int i=0;
    while (i<size) {
        printf("%c", *ptr++);
        i++;
    }
    printf("\n");
    i=0;
    while (i<size) {
        printf("%c", *--ptr);
        i++;
    }
    return 0;
}