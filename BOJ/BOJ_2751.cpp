#include <iostream>
#include <algorithm>

using namespace std;
int num[1000000]; // 배열의 크기가 크므로 전역 변수 선언

int main(){
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> num[i];
    }

    sort(num, num + N);

    for(int i=0; i<N; i++){
        cout << num[i] << "\n";
        // endl은 출력 스트림에 사용되는 버퍼를 매번 비우므로 시간 오래걸린다.
        // 따라서 \n 사용해서 시간을 단축한다.
    }
    return 0;
}