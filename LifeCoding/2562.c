#include<stdio.h>

int main(){
    int N;
    int max = 0, pos = 0;
    for(int i = 1; i <= 9; ++i){
        scanf("%d\n", &N);
        if(N > max){
            max = N;
            pos = i;
        }
    }
    printf("%d\n%d\n", max, pos);
    
    return 0;
}