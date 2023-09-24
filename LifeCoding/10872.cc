#include<iostream>
using namespace std; 

/* Using recursive function */
int factorial(int num) // 5
{
    if(num <= 1) return 1;
    return num * factorial(num-1);
}

int main()
{
    int N;
    int result;
    cin >> N;
    result = factorial(N);
    cout << result << "\n";
    system("pause");
    return 0;
}   