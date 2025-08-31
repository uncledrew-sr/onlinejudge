#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int rope[100000];
    for(int i=0; i<N; i++){
        cin >> rope[i];
    }
    sort(rope, rope + N);
    
    int max = rope[N-1];
    int current;
    for(int i=N-1; i>=0; i--){
        current = rope[i] * (N-i);
        if(max < current) max = current;
    }
    cout << max << "\n";
    return 0;
}