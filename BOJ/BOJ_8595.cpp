#include <iostream>
#include <string>
#include <cctype> // isdigit(), isalpha()
using namespace std;

int main(){
    int word_length;
    cin >> word_length;

    char input; // 한 글자씩 입력 받을 변수
    string temp = ""; // 누적된 숫자 문자열을 저장
    long long sum = 0; // 누적된 숫자의 총합

    while(word_length--){
        cin >> input;

        if(isdigit(input)){ // 입력 문자가 숫자일 때
            temp += input;
        }
        else if(isalpha(input)){ // 입력 문자가 알파벳일 때
            if(!temp.empty()){ // empty() : 문자열이 비어있는지 확인
                sum += stoll(temp); // stoll() : 문자열인 숫자를 정수로
                temp = ""; // 숫자를 더했으니 temp 비우기
            }
        }
        else continue;
    }

    if (!temp.empty()) {
        sum += stoll(temp);
    }

    cout << sum << "\n";
    return 0;
}