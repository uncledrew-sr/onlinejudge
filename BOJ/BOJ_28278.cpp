#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    stack<int> int_storage;
    
    int cmd;
    for(int i=0; i<N; i++){
        cin >> cmd;
        switch(cmd){
            case 1:
                int num;
                cin >> num;
                int_storage.push(num);
                break;
            case 2:
                if(!int_storage.empty()){
                    cout << int_storage.top() << "\n";
                    int_storage.pop();
                }else{
                    cout << -1 << "\n";
                }
                break;
            case 3:
                cout << int_storage.size() << "\n";
                break;
            case 4:
                if(int_storage.empty()) cout << 1 << "\n";
                else cout << 0 << "\n";
                break;
            case 5:
                if(!int_storage.empty()) cout << int_storage.top() << "\n";
                else cout << -1 << "\n";
                break;
        }
    }
    return 0;
}