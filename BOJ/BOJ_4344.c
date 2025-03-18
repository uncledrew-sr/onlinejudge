#include <stdio.h>

int main(){
    int C;
    int N, count;
    int score[1000];
    double average, above_percentage;

    scanf("%d", &C);

    for(int i=0; i<C; i++){
        scanf("%d", &N);
        int sum = 0;
        count = 0;

        for(int j=0; j<N; j++){
            scanf("%d", &score[j]);
            sum += score[j];
        }

        average = (double)sum / N;

        for(int j=0; j<N; j++){
            if(score[j] > average){
                count++;
            }
        }
        above_percentage = (double)count / N * 100;
        printf("%.3lf%%\n", above_percentage);
    }
    return 0;
}