#include <stdio.h>
 
int main() {
    float h, w, result;
    scanf("%f\n%f", &h, &w);
    result = w/((h/100)*(h/100));
    printf("%.6f",result);
    return 0;
}