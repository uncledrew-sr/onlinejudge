#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>a, pair<int, int>b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    else{
        return a.second < b.second;
    }
}

int main(){
    int N;
    cin >> N;

    vector<pair<int, int>> vec(N);

    int x, y;
    for(int i=0; i<N; i++){
        cin >> x >> y;
        vec[i].first = x;
        vec[i].second = y;
    }

    sort(vec.begin(), vec.end(), compare);

    for(int i=0; i<N; i++){
        cout << vec[i].first << "\n" << vec[i].second << "\n";
    }
    return 0;
}