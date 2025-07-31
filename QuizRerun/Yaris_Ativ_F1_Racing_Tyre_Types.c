#include <stdio.h>
#include <ctype.h>

int main() {
    char chr;
    scanf("%c", &chr);
    chr = tolower(chr);

    switch(chr) {
        case 's' : 
            printf("Soft");
            break;
        case 'm' : 
            printf("Medium");
            break;
        case 'h' : 
            printf("Hard");
            break;
        case 'i' : 
            printf("Intermediate");
            break;
        case 'w' : 
            printf("Wet");
            break;
    }
    return 0;
}