#include <iostream>
using namespace std;

int arr[100][100] = {0, }; // 배열의 모든 요소를 0으로 초기화하는 방법

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int color_paper;
    cin >> color_paper;

    int x, y, ans = 0;
    while(color_paper--){
        cin >> x >> y;
        for(int i=x; i<x+10; i++){
            for(int j=y; j<y+10; j++){
                if(++arr[i][j] == 1) ans++; // 이미 색종이가 놓인 부분을 중복해서 세지 않음
            }
        }
    }
    cout << ans << "\n";
    return 0;
}