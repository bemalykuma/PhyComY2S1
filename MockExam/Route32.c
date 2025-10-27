#include <stdio.h>

int main() {
    double km;
    scanf("%lf", &km);

    if (km >= 48.697 && km <= 66.456) {
        printf("Ang Thong");
    }
    else if (km >= 66.456 && km <= 84.918 || km >= 85.900 && km <= 111.936) {
        printf("Sing Buri");
    }
    else if (km >= 84.918 && km <= 85.900) {
        printf("Lop Buri");
    }
    else if (km >= 111.936 && km <= 150.019) {
        printf("Chai Nat");
    }
    else if (km >= 150.019 && km <= 150.545) {
        printf("Nakhon Sawan");
    }
    else if (km > 0 && km <= 48.697) {
        printf("Ayutthaya");
    }
    else {
        printf("InValid");
    }
    return 0;
}