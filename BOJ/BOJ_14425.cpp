#include <iostream>
#include <algorithm> // binary_search() : 정렬된 상태에서 사용
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<string> S(n);

    for(int i=0; i<n; i++){
        cin >> S[i];
    }

    sort(S.begin(), S.end()); // 이진 탐색을 하기 위해서 정렬

    string str_input;
    int count = 0;
    for(int i=0; i<m; i++){
        cin >> str_input;
        if(binary_search(S.begin(), S.end(), str_input)) count++;
    }
    cout << count << "\n";
    return 0;
}