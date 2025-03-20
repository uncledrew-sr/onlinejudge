#include <stdio.h>
#include <math.h>

int main(){
    int r, w, l;
    int i = 1;

    while(1){
        scanf("%d", &r); // &r은 변수 r의 주소를 의미
        if(r == 0){
            return 0;
        }

        scanf("%d %d", &w, &l);
        float diagonal = sqrt(w * w + l * l); // 직사각형의 대각선
        
        if(diagonal > 2*r){ // 직사각형의 대각선과 원의 지름 비교
            printf("Pizza %d does not fit on the table.\n", i);
        }
        else{
            printf("Pizza %d fits on the table.\n", i);
        }
        i++;
    }
    return 0;
}