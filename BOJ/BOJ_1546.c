#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    float score[N];
    int max = 0;
    for(int i=0; i<N; i++){
        scanf("%f", &score[i]);
        if(max < score[i]){
            max = score[i];
        }
    }

    float new_score_sum = 0;
    for(int i=0; i<N; i++){
        new_score_sum += score[i] / max * 100;
    }
    float avg = new_score_sum / N;
    printf("%f\n", avg);
    
    return 0;
}