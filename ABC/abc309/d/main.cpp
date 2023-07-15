//https://atcoder.jp/contests/abc309/editorial/6747

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

vector<int> G[300009];


int get(vector<int> G[], int pos, int N1, int N2){
    int N = N1 + N2;
    vector<int> dist(N + 1, -1);
    dist[pos] = 0;
    queue<int> Q;
    Q.push(pos);
    while(Q.size() > 0){
        int x = Q.front();
        Q.pop();
        rep(i, G[x].size()){
            int y = G[x][i];
            if(dist[y] == -1){
                dist[y] = dist[x] + 1;
                Q.push(y);
            }
        }
    }
    return *max_element(dist.begin(), dist.end());
}

int main(void){
    int a[300009], b[300009];
    int N1, N2;
    int M;
    cin >> N1 >> N2 >> M;
    rep(i, M){
        cin >> a[i] >> b[i];
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]); 
    }
    int ans = 0;
    ans = get(G, 1, N1, N2) + get(G, N1 + N2, N1, N2) + 1;
    cout << ans << endl;
    return 0;
}