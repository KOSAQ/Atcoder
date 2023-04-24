#include <bits/stdc++.h>
using namespace std;

int main(void){
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        int N;
        cin >> N;
        vector<int> A(N);
        int count = 0;
        for(int j = 0; j < N; j++){
            cin >> A[j];
        }
        for(int j = 0; j < N; j++){
            if(A[j] % 2 == 1){
                count++;
            }
        }
        cout << count << endl;
    }
}