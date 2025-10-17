#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%[^\n]", str);
    int found = 1;
    char temp[101];
    while (found) {
        found = 0;
        int i = 0, j = 0;
        while (str[i] != '\0') {
            if (str[i] == str[i+1]) {
                found = 1;
                char dup = str[i];
                while (str[i] == dup) {
                    i++;
                }
            } else {
                temp[j++] = str[i++];
            }
        }
        temp[j] = '\0';
        if (found) {
            printf("%s\n", temp);
        }
        strcpy(str, temp);
    }
    return 0;
}