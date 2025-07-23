#include <stdio.h>
 
int main() {
    char a;
    scanf("%c", &a);
    if (97 <= a + 32 && a + 32 <= 122) {
        printf("%c", a+32);
    } else if (65 <= a - 32 &&  a - 32 <= 90) {
        printf("%c", a-32);
    } else {
        printf("error");
    }
    return 0;
}