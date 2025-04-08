#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int x = 0, y = 0;
    int max_x = -10000, max_y = -10000;
    int min_x = 10000, min_y = 10000;
    for(int i=0; i<N; i++){
        cin >> x >> y;
        if(x > max_x){
            max_x = x;
        }
        if(x < min_x){
            min_x = x;
        }
        if(y > max_y){
            max_y = y;
        }
        if(y < min_y){
            min_y = y;
        }
    }

    x = max_x - min_x;
    y = max_y - min_y;
    int result = x * y;

    cout << result << "\n";
    return 0;
}