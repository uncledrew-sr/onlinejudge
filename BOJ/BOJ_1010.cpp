#include <iostream>
using namespace std;

int main(){
    int T, N, M;
    cin >> T;

    for(int i=0; i<T; i++){
        cin >> N >> M;
        int result = 1; // 테스트 케이스마다 초기화 해줘야 함
        int temp = 1;
        for(int j=M; j>M-N; j--){
            result *= j;
            result /= temp;
            temp++;
        }
        cout << result << "\n";
    }
    return 0;
}