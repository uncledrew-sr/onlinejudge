#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    int divisor[50];
    int N;

    cin >> num;
    for(int i=0; i<num; i++){
        cin >> divisor[i];
    }

    sort(divisor, divisor + num);
    N = divisor[0] * divisor[num-1];

    cout << N << "\n";
    return 0;
}