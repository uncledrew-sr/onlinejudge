#include <iostream>
#include <vector> // 런타임의 크기가 결정되는 배열은 vector 사용이 안전
#include <algorithm>
using namespace std;

int main(){
    int burger, side, beverage;
    cin >> burger >> side >> beverage;

    int set = min({burger, side, beverage}); // 세트의 개수

    int r_sum = 0; // 정상 가격

    vector<int> burger_price(burger);
    for(int i=0; i<burger; i++){
        cin >> burger_price[i];
        r_sum += burger_price[i];
    }

    vector<int> side_price(side);
    for(int i=0; i<side; i++){
        cin >> side_price[i];
        r_sum += side_price[i];
    }

    vector<int> beverage_price(beverage);
    for(int i=0; i<beverage; i++){
        cin >> beverage_price[i];
        r_sum += beverage_price[i];
    }

    // 내림차순으로 정렬
    double d_sum = 0;
    sort(burger_price.begin(), burger_price.end(), greater<int>());
    sort(side_price.begin(), side_price.end(), greater<int>());
    sort(beverage_price.begin(), beverage_price.end(), greater<int>());

    // 할인 가격 적용
    for(int i=0; i<set; i++){
        d_sum += burger_price[i] * 0.9;
        d_sum += side_price[i] * 0.9;
        d_sum += beverage_price[i] * 0.9;
    }
    // 세트 메뉴 외 정상 가격 적용
    for(int i=set; i<burger; i++){
        d_sum += burger_price[i];
    }
    for(int i=set; i<side; i++){
        d_sum += side_price[i];
    }
    for(int i=set; i<beverage; i++){
        d_sum += beverage_price[i];
    }

    cout << r_sum << "\n";
    cout << static_cast<int>(d_sum + 0.5) << "\n"; // 정수 타입으로 변환
    return 0;
}