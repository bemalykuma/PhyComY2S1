#include <stdio.h>

int main() {
    double m;
    scanf("%lf", &m);
    if (0 <= m && m <= 5.032) {
        printf("Bangkok");
    } else if (5.032 < m && m <= 35.477) {
        printf("Samut Prakarn");
    } else if (35.477 < m && m <= 52.900) {
        printf("Chachoengsao");
    } else if (52.900 < m && m <= 58.855) {
        printf("Chon Buri");
    } else {
        printf("InValid");
    }
    
    return 0;
}