#include <stdio.h>
 
int main() {
    float num;
    scanf("%f", &num);
    if (80 <= num && num <= 100) {
        printf("A");
    } else if (70 <= num && num < 80) {
        printf("B");
    } else if (60 <= num && num < 70) {
        printf("C");
    } else if (50 <= num && num < 60) {
        printf("D");
    } else if (0 <= num && num < 50) {
        printf("F");
    } else {
        printf("Out of Range");
    }
    return 0;
}