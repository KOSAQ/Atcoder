#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main(void){
    int N, D;
    cin >> N >> D;
    vector<int> X(N);
    vector<int> Y(N);

    rep(i, N){
        cin >> X[i] >> Y[i];
    }

    set<int> infection;
    infection.insert(0);
    bool flag = false;

    for(int k = 0; k < N; k++){
        flag = false;
        for(auto itr = infection.begin(); itr != infection.end(); itr++){
            rep(i, N){
                if(D >= sqrt(pow((X[*itr] - X[i]), 2) + pow((Y[*itr] - Y[i]), 2))){
                    infection.insert(i);
                    flag = true;
                }
            }
        }
        if(flag == false){
            break;
        }
    }

    rep(i, N){
        if(infection.count(i)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }


    return 0;
}