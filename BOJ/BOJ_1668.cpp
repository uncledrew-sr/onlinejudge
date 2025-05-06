#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, m[2];
    int max = 0;
    cin >> N;

    vector<int> num;
    
    for(int i=0; i<N; i++){
        cin >> m[0];
        num.push_back(m[0]);
    }

    m[0] = 0, m[1] = 0;

    for(int i=0; i<N; i++){
        if(max < num[i]){
            max = num[i];
            m[0]++;
        }
    }

    max = 0;
    for(int i=N-1; i>=0; i--){
        if(max < num[i]){
            max = num[i];
            m[1]++;
        }
    }

    cout << m[0] << "\n" << m[1] << "\n";
    return 0;
}