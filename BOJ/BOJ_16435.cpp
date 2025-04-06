#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, snake_bird = 0;
    cin >> n >> snake_bird;
    
    int fruit_height[n];
    for(int i=0; i<n; i++){
        cin >> fruit_height[i];
    }
    sort(fruit_height, fruit_height + n);
    
    for(int i=0; i<n; i++){
        if(snake_bird >= fruit_height[i]) snake_bird++;
        else break;
    }
    cout << snake_bird << "\n";
    return 0;
}