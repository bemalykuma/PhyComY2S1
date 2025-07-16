#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, result;
    scanf("%lf\n%lf", &a, &b);
    result = sqrt(a*a + b*b);
    printf("%.2lf", result);
    return 0;
}