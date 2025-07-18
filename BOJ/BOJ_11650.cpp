#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> coordinate;

int main(){
    int N;
    cin >> N;

    int x, y;
    for(int i=0; i<N; i++){
        cin >> x >> y;
        coordinate.push_back({x, y});
    }
    sort(coordinate.begin(), coordinate.end());
    for(int i=0; i<N; i++){
        cout << coordinate[i].first << " " << coordinate[i].second << "\n";
    }
    return 0;
}