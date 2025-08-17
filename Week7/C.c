#include <stdio.h>
#include <math.h>

double standardFunction(long x, long y);

int main() {
    long x, y;
    scanf("%ld %ld", &x, &y);

    double result = standardFunction(x, y);
    printf("sqrt(%ld^2+%ld^2)=%.2lf", x, y, result);
    return 0;
}

double standardFunction(long x, long y){
    return sqrt((x*x)+(y*y));
}