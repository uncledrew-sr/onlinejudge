#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        int y_score = 0, k_score = 0;

        for(int j=0; j<9; j++){
            int y=0, k=0;
            cin >> y >> k;
            y_score += y;
            k_score += k;
        }

        if(y_score > k_score){
        cout << "Yonsei" << "\n";
        }
        else if(y_score < k_score){
            cout << "Korea" << "\n";
        }
        else{
            cout << "Draw" << "\n";
        }
    }
    return 0;
}