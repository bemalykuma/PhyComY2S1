#include <stdio.h>
#include <string.h>

struct Weather {
    char outlook[9]; // outlook {overcast, sunny, rain}
    int temperature;
    double humidity;
    char wind; // wind {T, F}
};

void playing_decision(struct Weather* wth);

int main() {
    int day;
    scanf("%d", &day);

    struct Weather wth[day];

    for (int i = 0; i < day; i++) {
        scanf(" %s %d %lf %c", wth[i].outlook, &wth[i].temperature, &wth[i].humidity, &wth[i].wind);
    }

    for (int i = 0; i < day; i++) {
        playing_decision(&wth[i]);
        if (i != day - 1) {
            printf("\n");
        }
    }
}

void playing_decision(struct Weather* wth) {
    if (strcmp(wth->outlook, "overcast") == 0) {
        printf("yes");
    } else if (strcmp(wth->outlook, "rain") == 0) {
        if (wth->wind == 'F') {
            printf("yes");
        } else {
            printf("no");
        }
    } else if (strcmp(wth->outlook, "sunny") == 0) {
        if (wth->humidity > 77.5) {
            printf("no");
        } else {
            printf("yes");
        }
    }
}
