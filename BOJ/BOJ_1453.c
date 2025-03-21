#include <stdio.h>

void useComputer(){
    int N;
    scanf("%d", &N);
    int reject_num = 0;
    int computer[101] = {0}; // null 때문에 100이 아닌 101 사용
    // {0, }과 {0}은 문법적으로 동일, 둘중 아무거나 사용해도 무방함

    while(N--){ // 손님의 수 N 만큼 반복하는 while loop
        int select_num;
        scanf("%d", &select_num);
        if(computer[select_num] == 0){
            computer[select_num] = 1;
        }
        else{
            reject_num++;
        }
    }
    printf("%d\n", reject_num);
}

int main(){
    useComputer();
    return 0;
}