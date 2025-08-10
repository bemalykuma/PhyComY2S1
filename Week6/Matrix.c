#include <stdio.h>
int main() {
    double matrix_A[3][3], matrix_B[3][3], a=0, b=0, c=0, total=0;

    for (int r=0; r<3; r++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        matrix_A[r][0] = a;
        matrix_A[r][1] = b;
        matrix_A[r][2] = c;
    }
    for (int r=0; r<3; r++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        matrix_B[r][0] = a;
        matrix_B[r][1] = b;
        matrix_B[r][2] = c;
    }
    printf("A x B\n");
    for (int i=0; i<3; i++) {
        for (int r=0; r<3; r++){
            for (int c=0; c<3; c++){
                total += matrix_A[i][c] * matrix_B[c][r];
            }   
            printf("%.2lf ", total);
            total = 0;
        }
        if (i<2) {
            printf("\n");
        }
    }
    return 0;
}