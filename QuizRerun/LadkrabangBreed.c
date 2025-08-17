#include <stdio.h>
#include <math.h>
 
int main() {
    int day;
    char name1[7], name2[7], name3[7];
    double oil[3], oi=0;
 
    scanf("%d", &day);
    scanf("%s %s %s", name1, name2, name3);

    for (int i=0; i<day; i++) {
        for (int j=0; j<3; j++) {
            scanf("%lf ", &oi);
            oil[j] += oi;
        }
    };

    if (name1[0] == 'N') {

        printf("%s: %.0lf refills\n%s: %.0lf refills\n%s: %.0lf refills", name1, ceil(oil[0]/6.6), name2, ceil(oil[1]/5.5), name3, oil[2] = ceil(oil[2]/5.5));
    }else if (name2[0] == 'N'){
        printf("%s: %.0lf refills\n%s: %.0lf refills\n%s: %.0lf refills", name1, ceil(oil[0]/5.5), name2, ceil(oil[1]/6.6), name3, oil[2] = ceil(oil[2]/5.5));
    }else if (name3[0] == 'N'){
        printf("%s: %.0lf refills\n%s: %.0lf refills\n%s: %.0lf refills", name1, ceil(oil[0]/5.5), name2, ceil(oil[1]/5.5), name3, oil[2] = ceil(oil[2]/6.6));
    }
    
    
    return 0;
};