#include <stdio.h>
int main() {
    char text[101];
    int size=0;
    scanf("%[^\n]", text);

    while (text[size] != '\0') {
        size++;
    }

    for (int i=size-1; i>=0; i--) {
        printf("%c", text[i]);
    }

    return 0;
}