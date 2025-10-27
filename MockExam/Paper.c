#include <stdio.h>
#include <math.h>

int main() {
    float sizeX, sizeY;
    scanf("A%f\n", &sizeX);
    scanf("A%f", &sizeY);
    printf("%d", (int) pow(2.0, sizeY-sizeX));
    return 0;
}