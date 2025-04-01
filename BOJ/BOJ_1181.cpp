#include <iostream>
#include <algorithm>
using namespace std;

int compare(string a, string b){
    // 문자열의 길이가 같다면 단어 첫 글자의 사전순으로 정렬
    if(a.length() == b.length()){
        return a<b; // sort 함수에 크기 비교 값을 반환
    }
    // 문자열의 길이가 다르다면 길이가 짧은순으로 정렬
    else{
        return a.length() < b.length(); // sort 함수에 길이 비교 값을 반환
    }
}

int main(){
    int N;
    cin >> N;

    string word[20000];
    for(int i=0; i<N; i++){
        cin >> word[i];
    }
    sort(word, word+N, compare); // compare 함수로 비교 후 정렬

    for(int i=0; i<N; i++){
        if(i > 0 && word[i] == word[i-1]){
            continue; // 이미 출력된 단어라면 밑에 문장 무시하고 다시 loop 처음으로
        }
        cout << word[i] << "\n";
    }

    return 0;
}