#include <iostream>
using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(false);
    
    int arr[100000]; // 테스트케이스 최대 10만번
    int t, temp = 0;

    for(int i = 3; i <= 80000; i++){
        if(i % 3 == 0 && i % 7 == 0){
            temp += i;
        }
        else if(i % 3 == 0){
            temp += i;
        }
        else if(i % 7 == 0){
            temp += i;
        }
        arr[i] = temp;
    }

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> temp;
        cout << arr[temp] << "\n";
    }
    return 0;
}