#include <stdio.h>
#include <string.h> // strcpy()를 사용하기 위함

int main(){
    int T, N; // T : 테스트 케이스
    scanf("%d", &T);

    for(int j=0; j<T; j++){
        char schoolName[20];
        char winner[20];
        int L = 0;
        int mostL = 0;

        scanf("%d", &N);

        for(int i=0; i<N; i++){
            scanf("%s %d", schoolName, &L);
            if(mostL < L){
                mostL = L;
                strcpy(winner, schoolName);
                // strcpy()는 문자열을 복사하는 함수, schoolName을 winner에 복사
            }
        }

        printf("%s\n", winner);
    }
    return 0;
}
