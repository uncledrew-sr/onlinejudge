#include <iostream>
using namespace std;

int main(){
    int A, B, N;
    int result;
    cin >> A >> B >> N;

    while(N--){
        A %= B;
		A *= 10;
		result = A / B;
    }

    cout << result << "\n";
    return 0;
}