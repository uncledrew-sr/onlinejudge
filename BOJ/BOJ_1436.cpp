#include <iostream>
#include <string>
using namespace std;

int main(){
    int title;
    string string_title;
    int check = 0;

    int N;
    cin >> N;

    // 브루트포스 알고리즘 : 가능한 모든 경우의 수를 탐색, 일명 노가다
    for(title = 666; ;title++){ // 가장 작은 종말의 숫자인 666부터 탐색 시작
        string_title = to_string(title); // string 자료형으로 변환

        if(string_title.find("666") != -1){ // "666" 찾은 경우
            check++;
            if(check == N){ // ex) N이 4, 4번째로 큰 종말의 수 -> check 값이 4가 되면 출력 후 종료
                cout << title << "\n";
                break;
            }
        }
    }
    return 0;
}