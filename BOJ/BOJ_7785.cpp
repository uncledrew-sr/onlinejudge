#include <iostream>
#include <map>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    map<string, string, greater<>> m;
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string name, status;
        cin >> name >> status;
        m[name] = status;
    }

    map<string, string>::iterator it;
    for(it = m.begin(); it != m.end(); it++){
        if(it->second=="enter"){
            cout << it->first << "\n";
        }
    }

    return 0;
}