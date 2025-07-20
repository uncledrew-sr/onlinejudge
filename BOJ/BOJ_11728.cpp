#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); // 위의 것들 안 써주면 시간초과 발생

    int A, B;
    cin >> A >> B;

    vector<int> array;
    int element;
    for(int i=0; i<A; i++){
        cin >> element;
        array.push_back(element);
    }
    for(int i=0; i<B; i++){
        cin >> element;
        array.push_back(element);
    }

    sort(array.begin(), array.end());
    
    for(int i=0; i<array.size(); i++){
        cout << array[i] << " ";
    }
    cout << "\n";
    return 0;
}