#include <stdio.h>
int main() {
    char text[101];
    int size=0, fail=0, j=0;
    scanf("%[^\n]", text);

    while (text[size] != '\0') {
        size++;
    }

    for (int i=size-1; i>=0; i--) {
        if (text[i] != text[j++]) {
            fail++;
        }
    }
    if (fail>0) {
        printf("It is not Palindrome.");
    } else {
        printf("It is Palindrome.");
    }
    return 0;
}