#include <iostream>
using namespace std;

int main(){
    int A, B, V;
    cin >> A >> B >> V;
    
    // 정상 도달하면 안 미끄러지니까 도착 전날에 V-B까지 도달해야함
    if((V-B)%(A-B)==0){
        cout << (V-B)/(A-B) << "\n";
    }
    else{
        cout << (V-B)/(A-B)+1 << "\n";
    }
    return 0;
}