#include <iostream>
using namespace std;

int main(){
    int x[3], y[3];
    for(int i=0; i<3; i++){
        cin >> x[i] >> y[i];
    }
    // 각 좌표의 x 값과 y 값이 한 쌍씩 같은 값을 가진다.
    if(x[0] == x[1])
        cout << x[2] << " ";
    else if(x[0] == x[2])
        cout << x[1] << " ";
    else
        cout << x[0] << " ";

    if(y[0] == y[1])
        cout << y[2] << "\n";
    else if(y[0] == y[2])
        cout << y[1] << "\n";
    else
        cout << y[0] << "\n";

    return 0;
}