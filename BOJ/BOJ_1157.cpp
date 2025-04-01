#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int count[26] = {0};
    int max = -1; // 등장한 알파벳 중 최대 갯수
    char res; // 사용 갯수가 max인 알파벳

    string word;
    cin >> word;

    // 'a'부터 'z'는 아스키 코드 97 ~ 122
    // 'A'부터 'Z'는 아스키 코드 65 ~ 90
    // 두 문자 사이의 차이는 항상 32
    for(int i = 0; i < word.length(); i++){
        if(word[i] >= 'a' && word[i] <= 'z') word[i] -= 32; // 소문자를 대문자로 변환
        if(++count[word[i]-'A'] > max){ // ++count : count 배열 원소 값을 1 증가 시킴
            max = count[word[i]-'A']; // max 값 바꾸기
            res = word[i];
        }
    }

    int check = 0;
    for(int i = 0; i < 26; i++){
        if(max == count[i]) check++;
    }
    if(check == 1){
        cout << res; // 최대인 값이 1개면 알파벳 출력
    }
    else{
        cout << "?"; // 최대인 값이 0개 이거나 2개 이상(중복)이면 ? 출력
    }
}