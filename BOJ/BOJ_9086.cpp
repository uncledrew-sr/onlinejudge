#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); // 두 표준 입출력 동기화 해제
    cin.tie(NULL); // 입력과 출력 묶음을 풀기

    int T; string S;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> S;
        cout << S[0] << S[S.length()-1] << "\n";
    }
    return 0;
}