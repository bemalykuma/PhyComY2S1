#include <stdio.h>
 
int main() {
    double a, b;
    scanf("%lf,%lf", &a, &b);
    printf("The sum of the given numbers : %.6lf\nThe difference of the given numbers : %.6lf\nThe product of the given numbers : %.6lf\nThe quotient of the given numbers : %.6lf", a+b, a-b, a*b, a/b);
    return 0;
}