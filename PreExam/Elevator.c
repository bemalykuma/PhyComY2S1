#include <stdio.h>
#include <math.h>
double v = 1.5;
double a = 0.5;
 
int main() {
    int start, end;
    double limit, weight, total=0,sc=0,tc=0, sa=0, ta=0;
    scanf("%d %d", &start, &end);
    sa = pow(v, 2) / (2*a);
    ta = v / a;

    double s=0;
    for (int i=start; i<=end; i++) {
        if (i == 2 && start != 2) {
            s += 6;
        }else if (i > 2) {
            s += 4;
        }
    }
    sc = s-(2*sa);
    tc = sc/v;

    total = ta+tc+ta;

    printf("%.2lf", total);
    return 0;
}