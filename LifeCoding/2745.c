#include<stdio.h>

/*전역 변수*/
char input[100];
int x;

// 아스키코드 표에서 0 값은 89
// 아스키코드 표에서 'A' 값은 97
// '/0'의 의미는 NULL 이라는 문자이다.
// 즉 아스키 문자 값에서는 '\0' 문자열이고, 그냥 0은 숫자임. 

long long honer(int X)
{
    long long num = 0;
    for(int i = 0; i < input[i] != '\0'; i++){
        if(input[i] >= 'A' && input[i] <= 'Z')
            num = num * X + (input[i]- 'A' + 10);
        else{
            num = num * X + (input[i] - '0');
        }
    }
    return num;
}

int main()
{
    int result = 0;
    scanf("%s", input);
    scanf("%d", &x);

    // N을 B진법 수로 변환 후, B에다가 넣어주거나 혹은 다른 변수에 넣어서 출력. 
    printf("%lld \n", honer(x));
    return 0;
}