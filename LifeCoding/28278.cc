#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q1;
    queue<int> q2;

    // q1 에는 queue에 정수 1,2,3 을 넣어줌.
    q1.push(1);
    q1.push(2);
    q1.push(3);
    
    // q2 에는 queue에 정수 10, 20, 30 을 넣어줌. 
    q2.push(10);
    q2.push(20);
    q2.push(30);

    // q1과 q2의 값을 바꿔줌.
    swap(q1, q2);
    while(!q1.empty()){
        cout << q1.front() << endl;
        q1.pop();
    }
    return 0;

}