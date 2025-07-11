#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    /* 30의 배수가 되려면
    1. 마지막 수가 0이어야 한다.
    2. 각 자리수들을 더한 값이 3의 배수여야 한다. */

    string N;
    cin >> N;
    sort(N.begin(), N.end(), greater<>()); // 입력 받은 수를 내림 차순으로 정렬
    if(N[N.length()-1] != '0'){
        cout << -1 << "\n";
    }else{
        long long sum = 0;
        for(auto o : N){ // 문자열 N의 각 문자를 순회
            sum += o - '0'; // o - '0' : 문자를 숫자로 변환
            // 문자 아스키코드 : ex) '3'은 아스키코드 51, '0'은 아스키코드 48, '0'으로 빼면 문자 '3'이 정수 3으로 변한다.
        }
        if(sum % 3 == 0){
            cout << N << "\n";
        }else{
            cout << -1 << "\n";
        }
    }
    return 0;
}