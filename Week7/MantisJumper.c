#include <stdio.h>
#include <math.h>

int jump(int x);

int main() {
    int x;
    scanf("%d", &x);

    printf("method = %d", jump(x));
    return 0;
}

int jump(int x){
    if (x <= 1) {
        return 1;
    }else{
        return jump(x-1) + jump(x-2);
    }
}