#include <stdio.h>

int main() {
    int alp1, alp2, alp3, alp4, alp5;
    // scanf("%d\n%d\n%d\n%d\n%d\n%d", &alp1, &alp2, &alp3, &alp4, &alp5);
    scanf(" %c", &alp1);
    scanf(" %c", &alp2);
    scanf(" %c", &alp3);
    scanf(" %c", &alp4);
    scanf(" %c", &alp5);
    alp1 = alp1 + 1;
    alp3 = alp3 + 1;
    alp5 = alp5 + 1;
    printf("%c\n%c\n%c\n%c\n%c", alp1, alp2, alp3, alp4, alp5);
    return 0;
}
