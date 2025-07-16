#include <stdio.h>
 
int main() {
    double price, d, h, volume;
    scanf("%lf\n%lf\n%lf", &price, &d, &h);
    volume = h*3.14159265359*((d/2)*(d/2));
    printf("Volume : %.2lfml\nBaht/ml : %.4lf",volume, price/volume);
    return 0;
}