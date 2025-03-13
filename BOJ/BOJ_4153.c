#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
        long heru, ausar, auset;
        long long heru2, ausar2, auset2;
        
        scanf("%ld %ld %ld", &heru, &ausar, &auset);
        if(heru == 0 && ausar == 0 && auset == 0) break; // 0 0 0 입력 시 종료되는 조건

        heru2 = heru * heru;
        ausar2 = ausar * ausar;
        auset2 = auset * auset;

        if(heru2 == ausar2 + auset2 || ausar2 == heru2 + auset2 || auset2 == heru2 + ausar2){
            printf("right\n");
        }
        else{
            printf("wrong\n");
        }
    }
    return 0;
}