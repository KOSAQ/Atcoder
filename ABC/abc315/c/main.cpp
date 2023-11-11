#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N;
    cin >> N;
    vector<int> F(N);
    vector<int> S(N);
    rep(i, N){
        cin >> F[i] >> S[i];
    }
    
    //----------
    int ans = 0;
    map<int, set<int> > mp;

    rep(i, N){
        mp[F[i]].insert(S[i]);
    }

    set<int> score;

    rep(i, N){
        if(mp[F[i]].size() >= 2){
            int temps = 0;
            for(auto itr = score.rbegin(); itr != score.rbegin() + 1; itr++){
                temps += *itr;
            }
            score.insert(temps);
        }
    }
    
    // for(auto itr = score.begin(); itr != score.end(); ++itr) {
    //     std::cout << *itr << "\n";      // イテレータの指す先のデータを表示
    // }

    return 0;
}