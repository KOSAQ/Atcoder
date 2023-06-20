#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    char p, q;
    cin >> p >> q;
    if(int(p) > int(q)){
        swap(p, q);
    }

    vector<int> dist(6, 0);
    dist[0] = 3;
    dist[1] = 1;
    dist[2] = 4;
    dist[3] = 1;
    dist[4] = 5;
    dist[5] = 9;

    int ans = 0;
    for(int i = int(p); i < int(q); i++){
        ans += dist[i - 65];
    }
    cout << ans << endl;
    return 0;
}