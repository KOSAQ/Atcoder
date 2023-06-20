#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    if(N % 5 == 0){
        cout << N << endl;
    }
    else{
        if(N % 5 <= 2){
            cout << N - (N % 5) << endl;
        }
        else{
            cout << N + (5 - N % 5) << endl;
        }
    }
    return 0;
}