#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, K;
    cin >> N >> K;
    queue<int> A;

    for(int i = 0; i < N; i++){
        int in;
        cin >> in;
        A.push(in);
    }

    for(int i = 0; i < K; i++){
        A.pop();
        A.push(0);
    }

    for(int i = 0; i < N; i++){
        cout << A.front() << " ";
        A.pop();
    }
    cout << endl;
    return 0;
}