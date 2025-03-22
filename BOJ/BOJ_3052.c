#include <stdio.h>

int main(){
    int remain[42] = {0}; // 42로 나누면 나머지는 1~42, 나머지가 곧 배열의 주소
    int answer = 0; // 서로 다른 나머지의 개수

    for(int i=0; i<10; i++){
        int num;
        scanf("%d", &num);
        remain[num % 42] = 1; // 나머지가 배열의 주소이므로 0을 1로 바꾸기
    }

    for(int i=0; i<42; i++){
        answer += remain[i];
    }

    printf("%d\n", answer);
    return 0;
}