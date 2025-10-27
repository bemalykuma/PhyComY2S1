#include <stdio.h>
#include <string.h>

int main() {
    int second, song, min, sec, all_sec=0, now=0, order=0, complete=0, total=0;
    long minute;
    scanf("%ld.%d\n%d", &minute, &second, &song);

    double percents;
    char name[song][51], name_song[51];
    int sec_song[song], a=0, q, song_length=0;

    all_sec = second + minute*60;

    for (int i = 0; i<song; i++){
        scanf(" Queue#%d <|> %[^<] <|> %d.%d\n", &q, name_song, &min, &sec);
        strcpy(name[i], name_song);
        song_length = sec + min*60;
        sec_song[i] = song_length;
        now += song_length;
        if (order == 0){
            if (all_sec == now){
                order = q;
                complete = 1;
            }else if (all_sec < now){
                order = q;
                percents = ((double)(all_sec-(now-song_length))/song_length) * 100;
                complete = 0;
            }
        }
        if (i == song-1 && all_sec > now) {
            total = now;
            all_sec-=total;
            order = 0;
            q = 0;
            now = 0;
            for (int j = 0; j<song; j++){
                q++;
                now += sec_song[j];
                if (order == 0){
                    if (all_sec == now){
                        order = q;
                        complete = 1;
                    }else if (all_sec < now){
                        order = q;
                        percents = ((double)(all_sec-(now-sec_song[j]))/sec_song[j]) * 100;
                        complete = 0;
                    }
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