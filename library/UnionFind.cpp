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
    UnionFind uf(7);

    uf.unite(1, 2);
    uf.unite(1, 3);
    uf.unite(5, 6);


    cout << uf.issame(1, 3) << endl;
    cout << uf.issame(2, 5) << endl;


    uf.unite(1, 6);
    cout << uf.issame(2, 5) << endl;
    return 0;
}