#include <stdio.h>
#include <math.h>
double PI = 3.141592653589793;

double degreeToRadius(long degree);
double findHeight(double radius, long u);

int main() {
    long degree, u;
    scanf("%ld\n%ld", &degree, &u);

    double result = findHeight(degreeToRadius(degree), u);
    printf("theta (degree) : %ld\nu (m/s) : %ld\nh (m) : %.4lf", degree, u, result);
    return 0;
}

double degreeToRadius(long degree){
    return (degree * PI)/180;
}
double findHeight(double radius, long u){
    return ((u*u)*pow(sin(radius),2))/(2*9.81);
}