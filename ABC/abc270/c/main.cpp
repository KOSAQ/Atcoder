//https://programming-hiroba.com/abc270-c/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

vector<int> G[200009];
bool seen[200009];
vector<int> Path;
bool flag;

void dfs(int X, int Y){
    if(!flag){
        Path.push_back(X);
    }
    if(X == Y){
        flag = true;
    }
    seen[X] = true;
    for(auto next : G[X]){
        if(seen[next] == false){
            dfs(next, Y);
        }
    }
    if(!flag){
        Path.pop_back();
    }


}

int main(void){
    int N;
    int X, Y;
    cin >> N >> X >> Y;
    rep2(i, 1, N - 1){
        int U, V;
        cin >> U >> V;
        G[U].push_back(V);
        G[V].push_back(U);
    }

    rep2(i, 1, N){
        seen[i] = false;
    }
    flag = false;
    dfs(X, Y);

    rep(i, Path.size()){
        cout << Path[i] << " ";
    }
    cout << endl;



    return 0;
}