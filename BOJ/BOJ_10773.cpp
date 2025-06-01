#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> num_stack;
    int T;

    cin >> T;
    for(int i=0; i<T; i++){
        int temp;
        cin >> temp;

        if(temp == 0) num_stack.pop();
        else num_stack.push(temp);
    }

    int stack_size = num_stack.size();
    int sum = 0;
    for(int i=0; i<stack_size; i++){
        sum += num_stack.top();
        num_stack.pop();
    }
    cout << sum << "\n";
    return 0;
}