#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int height[9];
    int wholesum = 0;
    for(int i=0; i<9; i++){
        cin >> height[i];
        wholesum += height[i];
    }
    sort(height, height + 9); // 오름차순 정렬

    for(int i=0; i<8; i++){ 
        for(int j=1; j<9; j++){
            if(wholesum - height[i] - height[j] == 100){ // 전체에서 2명을 뺀 값이 100이면 가능
                for(int k=0; k<9; k++){
                    if(k == i || k == j) continue; // 뺀 값은 출력에서 제외, continue 이용해서 반복문 처음으로
                    cout << height[k] << "\n";
                }
                return 0;
            }
        }
    }
    return 0;
}