#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;

    int str_length = S.length();
    string arr[str_length];

    for(int i=0; i<str_length; i++){
        arr[i] = S.substr(i, str_length);
    }

    sort(arr, arr + str_length);

    for(int i=0; i<str_length; i++){
        cout << arr[i] << "\n";
    }
    return 0;
}