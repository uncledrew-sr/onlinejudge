#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int cute = 0; int not_cute = 0;
    for(int i=0; i<N; i++){
        int answer;
        cin >> answer;

        if(answer == 1){
            cute++;
            continue;
        }
        if(answer == 0){
            not_cute++;
            continue;
        }
    }

    if(cute > not_cute){
        cout << "Junhee is cute!" << "\n";
    }
    else{
        cout << "Junhee is not cute!" << "\n";
    }
    return 0;
}