#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;

    int s_min = 1000;
    int o_min = 1000;
    for(int i=0; i<M; i++){
        int s, o;
        cin >> s >> o;
        s_min = min(s_min, s);
        o_min = min(o_min, o);
    }

    int base = s_min * (N / 6); // 묶음으로만 구매했을 때 기본 비용
    int temp = min((N%6==0) ? base : base + s_min, base + (N % 6) * o_min); // 남은 아이템 없는 경우, 남은 아이템을 낱개로 구매하는 경우
    cout << min(o_min * N, temp) << "\n"; // 전부 다 낱개로 구매하는 경우와 temp(묶음과 낱개를 조합) 비교
    return 0;
}