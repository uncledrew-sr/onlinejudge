#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int w[10], k[10];

    for(int i=0; i<10; i++){
        cin >> w[i];
    }
    for(int i=0; i<10; i++){
        cin >> k[i];
    }
    sort(w, w+10);
    sort(k, k+10);
    
    int w_sum = w[7] + w[8] + w[9];
    int k_sum = k[7] + k[8] + k[9];

    cout << w_sum << " " << k_sum << endl;

    return 0;
}