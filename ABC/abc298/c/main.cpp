//https://atcoder.jp/contests/abc298/editorial/6217

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

int main(void){
    //input-----
    int N, Q;
    cin >> N >> Q;
    vector<vector<int> > box(200009, vector<int>());
    vector<vector<int> > card(200009, vector<int>());

    rep(i, Q){
        int q;
        cin >> q;
        if(q == 1){
            int i, j;
            cin >> i >> j;
            box[j].push_back(i);
            card[i].push_back(j);
        }
        if(q == 2){
            int i;
            cin >> i;
            sort(box[i].begin(), box[i].end());
            rep(k, box[i].size()){
                    cout << box[i][k] << " ";
            }
            cout << endl;
        }
        if(q == 3){
            int i;
            cin >> i;
            sort(card[i].begin(), card[i].end());
            card[i].erase(unique(card[i].begin(), card[i].end()), card[i].end());
            rep(k, card[i].size()){
                cout << card[i][k] << " ";
            }
            cout << endl;
        }
    }
    
    //----------

    return 0;
}