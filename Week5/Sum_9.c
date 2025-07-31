#include <stdio.h>
int main() {
    int num, total = 0;
    scanf("%d", &num);
    while (num != -9) {
        total += num;
        scanf("%d", &num);
    }
    printf("%d", total);
    return 0;
}