#include<iostream>
using namespace std;

// input the 10 numbers.
int a[11];

int main()
{
    int N,K;
    cin >> N >> K;

    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    // coin == result value
    int coin = 0; 
    for(int j = N - 1; j >= 0;j--)
    {   
        coin += K / a[j]; // add the quotient
        K = K % a[j]; // calculate the remain value
    }
    cout << coin << "\n";
    return 0;
}   