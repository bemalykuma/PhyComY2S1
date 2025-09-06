#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;
    int size, jump;
    scanf("%d", &size);
    scanf(" %d", &jump);

    str = (char*)malloc((size+1)*sizeof(char));
    scanf(" %[^\n]", str);
    if (jump > size) {
        printf("");
    }else{
    char *ptr = str;
    while (ptr < str+size && *ptr != '\0') {
        printf("%c", *ptr);
        ptr += jump;
    }}
    
}