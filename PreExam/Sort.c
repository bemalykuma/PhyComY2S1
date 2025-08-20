#include <stdio.h>
#include <math.h>
 
int main() {
    int n;
    scanf("%d", &n);
    double num[n], t;
    for (int i=0; i<n; i++){
        scanf("%lf ", &t);
        num[i] = t;
    }
     
    int last = n-1;
    while (last > 0) {
        int new_last=0;
        for (int i=0; i<last; i++){
            if (num[i] > num[i+1]) {
                double temp = 0;
                temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
                new_last = i;
            }
        }
        last = new_last;
    }
 
    for (int i=0; i<n; i++){
        printf("%.2lf ", num[i]);
    }
 
    return 0;
}