#include <iostream>
using namespace std;

int main(){
    long long S;
    cin >> S;

    int N = 0;
    while(S > 0){
        N++;
        S -= N;
    }

    if(S<0){
        N--;
    }

    cout << N << "\n";
    return 0;
}