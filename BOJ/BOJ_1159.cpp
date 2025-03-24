#include <iostream>
#include <string>

using namespace std;

int N;
int alphabet[26];
string s = "abcdefghijklmnopqrstuvwxyz";

int main(){
    cin >> N;
    for(int i=0; i<N; i++){
        string input;
        cin >> input;
        alphabet[input[0] - 'a']++;
        /*
        단어의 첫 글자로 나온 알파벳을 alphabet 인덱스에 개수 추가
        ASCII : 'a'는 97, 'b'는 98의 값을 가진다.
        ex) 'a' - 'a' = 0
            'b' - 'a' = 1
            ...
        */
    }
    
    bool predaja = true;
    for(int i=0; i<26; i++){
        if(alphabet[i] >= 5){
            cout << s[i]; // 문자열 인덱싱을 이용한 출력, 문제 조건의 사전순대로 출력하는 조건도 충족
            predaja = false; // false로 바뀌므로 맨 아래의 출력 X
        }
    }

    if(predaja) cout << "PREDAJA";
    // prejada == true 라면 -> "PREDAJA"를 출력하라는 의미

    return 0;
}