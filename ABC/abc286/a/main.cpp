#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N, P, Q, R, S;
    cin >> N >> P >> Q >> R >> S;
    vector<int> A(N + 1);
    vector<int> B(N + 1);
    for(int i = 1; i <= N; i++){
        cin >> A.at(i);
    }

    for(int i = 1; i <= N; i++){
        if((i >= P) && (i <= Q)){
            B.at(i) = A.at(i + (R - P));
        }
        else if((i >= R) && (i <= S)){
            B.at(i) = A.at(i - (R - P));
        }
        else{
            B.at(i) = A.at(i);
        }
    }

    for(int j = 1; j <= N; j++){
        cout << B.at(j) << " ";
    }
    cout << endl;
}