#include <iostream>
#include <string>
#include <cctype> // toupper()

using namespace std;

int main(){
    char ch;
    string str;
    
    while(1){
        cin >> ch;
        getline(cin, str); // 공백을 포함해서 입력 받기

        if(ch == '#') break; // break 되어 반복문을 빠져나가고 반환값 0을 갖게 됨

        int alphabetCount = 0;
        
        for(int i=0; i<str.length(); i++){
            if(str[i] == ch || str[i] == toupper(ch)) alphabetCount++;
        }
        cout << ch << " " << alphabetCount << endl;
    }
    return 0;
}