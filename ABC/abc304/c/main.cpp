#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int N, D;
int X[2009], Y[2009];

bool dist(int i, int j, int D){
    double left, right;
    left = pow((X[i] - X[j]), 2);
    right = pow((Y[i] - Y[j]), 2);
    if(left + right <= pow((double)D, 2)){
        return true;
    }
    else{
        return false;
    }
}


int main(void){
    cin >> N >> D;
    rep2(i, 1, N){
        cin >> X[i] >> Y[i];
    }

    bool infect[2009];
    rep2(i, 1, N){
        if(i == 1){
            infect[i] = true;
        }
        else{
            infect[i] = false;
        }
    }//true:infect,  false:not infect

    vector<int> G[2009];
    for(int i = 1; i <= N; i++){
        for(int j = i + 1; j <= N; j++){
            if(dist(i, j, D)){
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }

    queue<int> Q;
    Q.push(1);
    while(Q.size() > 0){
        int pos = Q.front();
        Q.pop();
        rep(i, G[pos].size()){
            int y = G[pos][i];
            if(!infect[y]){
                infect[y] = true;
                Q.push(y);
            }
        }
    }

    rep2(i, 1, N){
        if(infect[i]){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }


    return 0;
}