#include <iostream>
#include <algorithm> // sort 함수와 max 함수를 사용하기 위해
using namespace std;

int score[50];

int main(){
    int k; // 반의 개수
    cin >> k;

    int class_num = 1;
    while(k--){
        int n; // 각 반의 학생 수
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> score[i];
        }
        sort(score, score+n); // 점수를 오름차순 정렬

        int Largest_gap = -1; // 초기값 설정
        for(int i=0; i<n-1; i++){
            Largest_gap = max(Largest_gap, score[i+1]-score[i]); // 인접한 수의 차를 비교하기
            // max(value_1, value_2)
        }
        cout << "Class " << class_num << "\n";
        cout << "Max " << score[n-1] << ", Min " << score[0] << ", Largest gap " << Largest_gap << "\n";
        class_num++;
    }
    return 0;
}