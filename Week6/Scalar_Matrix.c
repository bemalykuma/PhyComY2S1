#include <stdio.h>
int main() {
    double matrix[3][3], a=0, b=0, c=0;
    int fail = 0;

    for (int r=0; r<3; r++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        matrix[r][0] = a;
        matrix[r][1] = b;
        matrix[r][2] = c;
    }

        for (int r=0; r<3; r++){
            for (int c=0; c<3; c++){
                if (matrix[r][c] != matrix[r][r] && matrix[r][c] != 0) {
                    fail++;
                }
            }
        }

    if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2] && matrix[2][2] != 0 && fail == 0) {
        printf("This is a scalar matrix");
    }else {
        printf("This is not a scalar matrix");

    }
    return 0;
}