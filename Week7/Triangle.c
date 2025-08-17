#include <stdio.h>
#include <math.h>
 
double perimeter(double a, double b);
double area(double a, double b);
 
int main() {
    double a, b, are, peri;
    scanf("%lf\n%lf", &a, &b);
    are = area(a, b);
    peri = perimeter(a, b);
    printf("Perimeter: %.2lf\nArea: %.2lf", peri, are);
    return 0;
}
 
double area(double a, double b) {
    return a*b*(1.0/2);
}
 
double perimeter(double a, double b) {
    double c;
    c = sqrt(a*a + b*b);
    return a+b+c;
}