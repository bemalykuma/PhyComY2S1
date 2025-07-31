#include <stdio.h>
int main() {
    int num, i, j;
    scanf("%d", &num);
    for (i=0; i < num; i++) {
        for (j=0; j < num ; j++) {
            if (i == j || i + j == num -1) {
                printf("-");
            }
            else {
                printf("#");
            }
        }
        if (i != num-1) {
            printf("\n");
        }
    }
    
}
