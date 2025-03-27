#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, k;
    cin >> N >> k;

    int arr[1000];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    sort(arr, arr + N); // 오름차순 정렬

    cout << arr[N-k] << endl;

    return 0;
}