#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;

    str = (char*)malloc(101*sizeof(char));
    scanf("%[^\n]", str);
    
    char *ptr = str;
    while (*ptr != '\0') {
        *ptr++;
    }
    while (ptr > str) {
        printf("%c", *--ptr);
    }
    return 0;
}