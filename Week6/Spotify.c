#include <stdio.h>
#include <string.h>

int main() {
    int second, song, min, sec, all_sec=0, now=0, order=0, complete=0, total=0;
    long minute;
    scanf("%ld.%d\n%d", &minute, &second, &song);

    double percents;
    char name[song][51], name_song[51];
    int sec_song[song], q, song_length=0;

    all_sec = second + minute*60;

    for (int i = 0; i<song; i++){
        scanf(" Queue#%d <|> %[^<] <|> %d.%d\n", &q, name_song, &min, &sec);
        strcpy(name[i], name_song);
        song_length = sec + min*60;
        sec_song[i] = song_length;
        total += song_length;
    }

    int amount = all_sec % total;

    if (amount == 0) { // จบรอบพอดี
        order = song;
        complete = 1;
    }else{
        now = 0;
        for (int i = 0; i<song; i++){
            now += sec_song[i];
            if (order == 0){
                if (amount == now){
                    order = i+1;
                    complete = 1;
                }else if (amount < now){
                    order = i+1;
                    percents = ((double)(amount-(now-sec_song[i]))/sec_song[i]) * 100;
                    complete = 0;
                }
            }
        }
    }
    
    if (percents > 0 && percents < 1){
        percents = 1;
    }
    else{
        percents = (int)percents;
    }
    if (complete == 1) {
        printf("Song Order: %d\nSong Name: %s\nSong Process: Complete", order, name[order-1]);
    }else{
        printf("Song Order: %d\nSong Name: %s\nSong Process: %.0lf%%", order, name[order-1], percents);
    }
    return 0;
}