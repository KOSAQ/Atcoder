//https://atcoder.jp/contests/abc269/editorial/4844

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    long long N;
    cin >> N;
    //----------
    bitset<64> N_bi(N);
    vector<long long> ans;
    ans.push_back(0);

    rep(i, 60){
        if(N_bi[i]){
            int size = ans.size();
            rep(j, size){
                ans.push_back(ans[j] | (1ll << i));
            }
        }
    }
    for(auto &next : ans){
        cout << next << endl;
    } 




    return 0;
}