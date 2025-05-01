#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int candy, bros;
        cin >> candy >> bros;
        int broget = candy / bros;
        int dadget = candy % bros;
        cout << "You get " << broget << " piece(s) and your dad gets " << dadget << " piece(s)." << endl;
    }
    return 0;
}