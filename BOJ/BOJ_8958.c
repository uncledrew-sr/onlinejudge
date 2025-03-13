#include <stdio.h>
#include <string.h> // strlen() 함수를 사용하기 위함

int main(){
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int score = 0, cont = 0; // 테스트 케이스 시작 : 얻는 점수와, 연속 가산점을 초기화
        char quiz[80]; // 문자 자료형의 배열
        scanf("%s", quiz); // 배열에 문자 넣기
        
        for(int j=0; j<strlen(quiz); j++){ // strlen() 함수는 문자열의 길이를 숫자로 치환
            if(quiz[j] == 'O'){
                cont ++; // 연속된 O가 있을 때 가산점
                score += cont; // 점수 더하기
            }
            if(quiz[j] == 'X'){
                cont = 0; // X가 나왔으므로 가산점 초기화
            }
        }
        printf("%d\n", score);
    }
    return 0;
}