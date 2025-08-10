#include <stdio.h>

int main() {
    int first, last, total=0;
    scanf("%d\n%d", &first, &last);
    printf("pass : ");
    if (first <= last) {
        for (int i=first; i<last+1; i++) {
            if (i%2==0) {
                printf("%d", i);
                total += i;
                if (i < last)
                    printf(" ");
            }
        }
    }else{
        for (int i=first; i>=last; i--) {
            if (i%2==0) {
                printf("%d", i);
                total += i;
                if (i > last)
                    printf(" ");
            }
        }
    }
    printf("\nSum : %d", total);
    return 0;
}