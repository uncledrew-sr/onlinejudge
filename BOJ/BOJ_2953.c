#include <stdio.h>

int main(){
    int score_sum[5];

    for(int i=0; i<5; i++){
        int score1 = 0, score2 = 0, score3 = 0, score4 = 0;
        scanf("%d %d %d %d", &score1, &score2, &score3, &score4);
        score_sum[i] = score1 + score2 + score3 + score4;
    }

    int maximum = 0;
    int max_num = 0;
    for(int i=0; i<5; i++){
        if(score_sum[i] > maximum){
            maximum = score_sum[i];
            max_num = i;
        }
    }
    printf("%d %d\n", max_num + 1, score_sum[max_num]);
    
    return 0;
}