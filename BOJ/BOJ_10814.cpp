#include <iostream>
#include <vector>
#include <algorithm> // stable_sort()
using namespace std;

int N;
vector<pair<int, string>> v; // (나이 : 이름) 쌍을 저장할 벡터

bool compare(const pair<int, string> &a, const pair<int, string> &b){
    // pair<int, string> 에서 first는 나이, second는 이름
    return a.first < b.first; // 나이만 비교해서 정렬
}

int main(){
    cin >> N;

    for(int i=0; i<N; i++){
        int age; string name;
        cin >> age >> name; // 사용자에게 나이와 이름을 입력 받음
        v.push_back(pair<int, string>(age, name)); // 벡터에 나이와 이름을 입력함
    }
    // 중복된 값들의 순서를 손상하지 않고 나이만 정렬 -> 조건 : 나이가 같으면 가입한 순으로 정렬
    stable_sort(v.begin(), v.end(), compare); // compare 함수 실행, 나이 비교
    
    for(int i=0; i<N; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}