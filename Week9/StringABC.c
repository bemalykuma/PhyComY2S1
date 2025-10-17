#include <stdio.h>
#include <string.h>

int main() {
    char str[201];
    scanf("%[^\n]", str);
    int size = strlen(str);

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("%s", str);

    return 0;
}