#include <stdio.h>
 
int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if ((b < a && a < c) || (c < a && a < b)) {
        printf("%.2f", a);
    }
    else if ((a < b && b < c) || (c < b && b < a)) {
        printf("%.2f", b);
    }
    else if ((a < c && c < b) || (b < c && c < a)) {
        printf("%.2f", c);
    }
    else {
        printf("%.2f", a);
    }
    return 0;
}