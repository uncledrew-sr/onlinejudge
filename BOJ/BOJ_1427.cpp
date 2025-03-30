#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string num;
    cin >> num;
    sort(num.begin(), num.end(), greater<char>()); // greater<type>() -> 오름차순 정렬
    cout << num << "\n";
    return 0;
}