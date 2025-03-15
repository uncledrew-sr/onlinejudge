#include <stdio.h>

void plug(int N){
    int outlet = 0;
    int result = 0;

    for(int i=0; i<N; i++){
        scanf("%d", &outlet);
        result += outlet;
    }
    result -= (N-1);
    printf("%d\n", result);
}

int main(){
    int N; // multi_tab
    scanf("%d", &N);
    plug(N);
    return 0;
}