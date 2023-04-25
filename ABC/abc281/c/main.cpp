#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    long long T;
    cin >> N >> T;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    long long sum = 0;

    for(int i = 0; i < N; i++){
        sum += A[i];
    }
    
    if(T > sum){
        T -= (T / sum) * sum;
    }

    for(int i = 0; i < N; i++){
        if(T > A[i]){
            T -= A[i];
            continue;
        }
        else{
            cout << i + 1 << " " << T << endl;
            return 0;
        }
    }
}