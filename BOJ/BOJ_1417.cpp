#include <iostream>
#include <algorithm>
using namespace std;

int vote[1000];

int main(){
    int count = 0;
    int candidate, dasom;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> candidate;
    cin >> dasom;
    for(int i=0; i<candidate-1; i++) cin >> vote[i];

    while(true){
        int find_max = 0;
        int index = 0;

        // 최대값 찾기
        for(int i=0; i<candidate-1; i++){
            if(find_max < vote[i]){
                find_max = vote[i];
                index = i;
            }
        }
        // 최대값이 다솜의 표보다 적다면 count 출력
        if(dasom > find_max){
            cout << count << "\n";
            break; // 반복문 탈출
        }
        // 최대값이 다솜의 표보다 많다면 매수해서 표 뺏어오기
        dasom++; // 다솜의 표 추가
        vote[index]--; // 최대값을 가진 후보자의 표 뺏어오기
        count++; // 뺏어올 표의 수
    }
    return 0;
}