#include <stdio.h>

int main() {
    int num, koon;
    scanf("%d\n%d", &num, &koon);
    for (int i=1; i<koon+1; i++) {
        printf("%d x %d = %d", num, i, num*i);
        if (i < koon){
            printf("\n");
        }
    }
    return 0;
}