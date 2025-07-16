#include <stdio.h>
 
int main() {
    float num1, num2, num3, num4, sum;
    scanf("%f\n%f\n%f\n%f", &num1, &num2, &num3,&num4);
    sum = num1 + num2 + num3 + num4;
    printf("Summation is %.2f\nAverage is %.3f", sum, sum/4);
    return 0;
}