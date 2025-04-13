#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<pair<int, int>> scores(8);
    // first는 점수, second는 인덱스 번호

    for(int i=0; i<8; i++){
        cin >> scores[i].first;
        scores[i].second = i+1;
    }
    // greater<pair<int, int>>() 이용해서 내림차순 정렬
    sort(scores.begin(), scores.end(), greater<pair<int, int>>());
    // first를 우선으로 정렬하고, 동일하면 second로 비교함

    int sum = 0;
    int high[5];

    for(int i=0; i<5; i++){
        sum += scores[i].first;
        high[i] = scores[i].second;
    }
    sort(high, high+5);

    cout << sum << "\n";
    for(int i=0; i<5; i++){
        cout << high[i] << " ";
    }
    cout << "\n";
    return 0;
}