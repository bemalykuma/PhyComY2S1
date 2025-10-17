#include <stdio.h>
 
int main() {
    char txt[151];
    scanf("%[^\n]", txt);
    int i = 0;
    while (txt[i] != '\0') {
        if (txt[i] != ' ') {
            printf("%c", txt[i]);
        }
        i++;
    }
    return 0;
}