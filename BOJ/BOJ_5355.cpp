#include <iostream>
#include <string>
#include <iomanip> // 입출력 조작 라이브러리

using namespace std;

int main(){
    int T;
    cin >> T;

    double inputNum;
    /*
    float f = 1.0 / 3.0;      -> 0.333333343
    double d = 1.0 / 3.0;     -> 0.333333333333333
    double이 소수점에서 더 정확한 값을 표현할 수 있기에 double 사용
    */
    for(int i=0; i<T; i++){
        cin >> inputNum;

        char op;
        while(1){
            cin.get(op);

            if(op == '\n') break; // enter를 치면 입력이 끝나는 코드
            if(op == '@') inputNum*=3;
            if(op == '%') inputNum+=5;
            if(op == '#') inputNum-=7;
        }
    
        cout<<fixed; // 소수점 자릿수 고정
        cout.precision(2); // 소수점 2번째 자리까지 표현
        cout<<inputNum<<"\n"; // 각 테스트 케이스의 최종 값을 출력
    }
    return 0;
}