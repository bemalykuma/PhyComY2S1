#include <stdio.h>
 
int main() {
    int m, n, i;
    scanf("%d %d", &m, &n);
 
    if (m > n) {
        for (i=m; i >= n; i--) {
            printf("%d ", i);
        }
    }else if (n > m) {
        for (i=m; i <= n; i++) {
            printf("%d ", i);
        }
    }
    return 0;
}