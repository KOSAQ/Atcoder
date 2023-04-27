//https://programming-hiroba.com/abc277-c/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

map<int, vector<int> > graph;
map<int, bool> visited;
int ans = 1;

void dfs(int floor){
    visited[floor] = true;
    if(floor > ans){
        ans = floor;
    }
    for(auto next_floor : graph[floor]){
        if(!visited[next_floor]){
            dfs(next_floor);
        }
    }
}

int main(void){
    int N;
    cin >> N;
    rep(i, N){
        int A, B;
        cin >> A >> B;
        graph[A].push_back(B);
        graph[B].push_back(A);
    }
    dfs(1);
    cout << ans << endl;

    return 0;
}
