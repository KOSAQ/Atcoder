#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N, M, H, K;
    cin >> N >> M >> H >> K;
    string S;
    cin >> S;
    vector<int> x(M);
    vector<int> y(M);

    rep(i, M){
        cin >> x[i] >> y[i];
    }

    map<int, set<int> > mp;
    rep(i, M){
        mp[x[i]].insert(y[i]);
    }
    
    int nx=0, ny=0;
    int nhp = H;
    int action = 0;

    rep(i, N){
        if(S[i] == 'R'){
            nhp--;
            if(nhp < 0){
                cout << "No" << endl;
                return 0;
            }
            nx++;
            action++;
        }
        if(S[i] == 'L'){
            nhp--;
            if(nhp < 0){
                cout << "No" << endl;
                return 0;
            }
            nx--;
            action++;
        }
        if(S[i] == 'U'){
            nhp--;
            if(nhp < 0){
                cout << "No" << endl;
                return 0;
            }
            ny++;
            action++;
        }
        if(S[i] == 'D'){
            nhp--;
            if(nhp < 0){
                cout << "No" << endl;
                return 0;
            }
            ny--;
            action++;
        }
        if(mp[nx].count(ny)){
            if(nhp < K){
                nhp = K;
                mp[nx].erase(ny);
            }
        }
    }
    
    if(action == N){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}