#include <stdio.h>
#include <ctype.h>
 
int main() {
    char chr;
    scanf("%c", &chr);
    switch (toupper(chr)) {
        case 'A' : printf("Genius");
                break;
        case 'B' : printf("Good");
                break;
        case 'C' : printf("Try Harder");
                break;
        case 'D' : printf("Very Bad");
                break;
        case 'F' : printf("Fail");
                break;
        default : printf("Invalid Input");
    }
    return 0;
}