#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> num(5);
    int mean = 0, median = 0;

    for(int i=0; i<5; i++){
        cin >> num[i];
        mean += num[i];
    }
    sort(num.begin(), num.end());

    mean /= 5;
    median = num[2];

    cout << mean << "\n" << median << "\n";
    return 0;
}