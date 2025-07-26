#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); // 두 표준 입출력 동기화 해제
    cin.tie(NULL); // 입력과 출력 묶음을 풀기

    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    int M;
    cin >> M;
    for(int i=0; i<M; i++){
        int tmp;
        cin >> tmp;
        if(binary_search(A.begin(), A.end(), tmp)) cout << 1 << "\n"; // 반환 값이 bool 타입이므로 true 반환 시 1을 출력
        else cout << 0 << "\n";
    }
    return 0;
}