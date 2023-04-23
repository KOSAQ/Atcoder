#include <bits/stdc++.h>
using namespace std;

bool checkT(vector<long long> C, long long T){
    for(int i = 0; i < C.size(); i++){
        if(C[i] == T){
            return true;
        }
    }
    return false;
}

int main(void){
    int N;
    long long T;
    cin >> N >> T;
    vector<long long> C(N);
    vector<long long> R(N);

    for(int i = 0; i < N; i++){
        cin >> C[i];
    }
    for(int i = 0; i < N; i++){
        cin >> R[i];
    }

    long long tempR = 0;
    int temp = 0;
    if(checkT(C, T)){
        for(int i = 0; i < N; i++){
            if(C[i] == T){
                if(R[i] > tempR){
                    tempR = R[i];
                    temp = i;
                }
            }
        }
        cout << temp + 1 << endl;
    }
    else{
        int temp2 = 1;
        for(int i = 0; i < N; i++){
            if(C[i] == C[0]){
                if(R[i] > R[temp2 - 1]){
                    temp2 = i + 1;
                }
            }
        }
        cout << temp2 << endl;
    }
    return 0;

}