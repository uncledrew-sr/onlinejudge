#include <stdio.h>

int main(){
    int scale[8] = {0};
    int check = 0; // 1 : ascending, 2 : descending, 0 : mixed

    for(int i=0; i<8; i++){
        scanf("%d", &scale[i]);
    }

    if(scale[0] == 1){
        for(int j=1; j<8; j++){
            if(scale[j] == 1 + j){
                check = 1;
            }
            else{
                check = 0;
                break; // mixed 이므로 반복문 탈출
            }
        }
    }
    else if(scale[0] == 8){
        for(int k=1; k<8; k++){
            if(scale[k] == 8 - k){
                check = 2;
            }
            else{
                check = 0;
                break; // mixed 이므로 반복문 탈출
            }
        }
    }
    
    if(check == 1){
        printf("ascending\n");
    }
    else if(check == 2){
        printf("descending\n");
    }
    else if(check == 0){
        printf("mixed\n");
    }
    return 0;
}