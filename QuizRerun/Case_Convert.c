#include <stdio.h>
#include <ctype.h>

int main() {
    char chr;
    scanf("%c", &chr);

    if (islower(chr)) {
        printf("%c", toupper(chr));
    } else if (isupper(chr)) {
        printf("%c", tolower(chr));
    } else {
        printf("error");
    }
    return 0;
}