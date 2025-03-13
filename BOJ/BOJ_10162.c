#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int a = 0, b = 0, c = 0;

    if(T%10 != 0){
        printf("%d", -1);
    }
    else{
        a = T/300;
        T = T%300;
        b = T/60;
        T = T%60;
        c = T/10;
        T = T%10;
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}