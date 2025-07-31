#include <stdio.h>
int main() {
    int num, i, j;
    scanf("%d", &num);
    for (i=0; i < num; i++) {
        for (j=0; j <= num+i ; j++) {
            if (j+i >= num-1 && j-i <= num-1) {
                printf("*");
            }else {
                printf(" ");
            }
        }
        if (i != num-1) {
            printf("\n");
        }
    }
}