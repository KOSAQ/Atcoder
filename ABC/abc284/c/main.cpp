#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> parent, rank, size;

    UnionFind(int n) : parent(n,-1), rank(n,0), size(n,1) { }

    
    int root(int x) {
        if(parent[x] == -1){
            return x;
        }
        else{
            return parent[x] = root(parent[x]);
        } 
    }

    bool issame(int x, int y) {
        return root(x)==root(y);
    }

    bool unite(int x, int y){
        int rootx = root(x);
        int rooty = root(y);

        if(rootx == rooty){
            return false;
        }

        if(size[rootx] < size[rooty]){
            swap(rootx, rooty);
        }
        parent[rooty] = rootx;
        size[rootx] += size[rooty];
        return true;
    }

    int getsize(int x) {
        return size[root(x)];
    }
};

int main(void){
    int N, M;
    cin >> N >> M;
    UnionFind uf(N);

    int u, v;
    for(int i = 0; i < M; i++){
        cin >> u >> v;
        uf.unite(u, v);
    }

    int ans = 0;
    for(int i = 0; i < N; i++){
        if(uf.root(i) == i){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}