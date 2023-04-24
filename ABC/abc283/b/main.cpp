#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    int Q;
    cin >> Q;

    vector<int> query(3, -1);
    for(int i = 0; i < Q; i++){
        cin >> query[0];
        if(query[0] == 1){
            cin >> query[1] >> query[2];
        }
        else{
            cin >> query[1];
        }

        if(query[0] == 1){
            A[query[1] - 1] = query[2];
        }
        else{
            cout << A[query[1] - 1] << endl;
        }
    }
    return 0;
}