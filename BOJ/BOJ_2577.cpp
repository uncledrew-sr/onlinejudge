#include <iostream>

int main(){
    int count[10] = {0};
    
    int A, B, C;
    std::cin >> A >> B >> C;
    
    int mul = A * B * C;

    while(mul > 0){
        count[mul % 10] += 1;
        mul /= 10; // 숫자 한 자리씩 처리, 0보다 작아지면 반복문 종료
    }

    for(int i=0; i<10; i++){
        std::cout << count[i] << std::endl; // endl은 버퍼를 비우라는 사인
    }
    return 0;
}