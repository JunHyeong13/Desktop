#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int solution(int a, int b, int numbers[])
{
    char k_str[20];
    // sprintf란 여러가지 서식들을 조합하여 출력을 도와주는 함수
    // b -> %d => k_str 이라는 문자열 값에 저장.
    sprintf(k_str, "%d", b); 
    int include_count = 0;


    for(int i = 0; i < a; i++){
        char num_str[20];
        // numbers[i]라는 배열 값을 num_str이라는 변수에 저장.
        sprintf(num_str, "%d", numbers[i]);

        // strstr 함수란, 문자열 안에 특정 문자열이 있는지 탐색할 수 있는 함수
        // num_str 안에 k_str 문자열 값이 있는지 확인. 
        if(strstr(num_str, k_str) == NULL){
            include_count++;
        }
    }
    return include_count;
}


int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int result = solution(n,k,arr);
    printf("%d ", result);
    return 0;
}