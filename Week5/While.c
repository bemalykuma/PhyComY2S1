#include <stdio.h>
int main() {
    int num, i = 1;
    scanf("%d", &num);
    while (i <= num) {
        printf("%d ",i++);
    }
    return 0;
}