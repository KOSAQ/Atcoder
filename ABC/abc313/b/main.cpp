#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N, M;
    cin >> N >> M;
    int A[2509], B[2509];
    rep2(i, 1, M){
        cin >> A[i] >> B[i];
    }
    //----------

    map<int, set<int> > mp;
    map<int, set<int> > mp2;
    rep2(i, 1, M){//mp[x]番目は、xに負けている人の集合
        mp[A[i]].insert(B[i]);
    }

    
    
    
    
    rep(i, N){
        rep2(i, 1, N){
            for(auto itr = mp[i].begin(); itr != mp[i].end(); ++itr){
                set_union(begin(mp[i]), std::end(mp[i]), std::begin(mp[*itr]), std::end(mp[*itr]), std::inserter(mp[i], std::end(mp[i])));
            }
        }
    }
    
    // rep2(i, 1, N){
    //     for(auto itr = mp[i].begin(); itr != mp[i].end(); ++itr){
    //         cout << *itr << " ";
    //     }
    //     cout << endl;
    // }

    

    bool flag = false;
    rep2(i, 1, N){
        if(mp[i].size() == N - 1){
            flag = true;
            cout << i << endl;
            return 0;
        }
    }
    if(flag == false){
        cout << -1 << endl;
    }


    return 0;
}