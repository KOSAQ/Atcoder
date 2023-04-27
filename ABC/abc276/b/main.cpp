#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N, M;
    cin >> N >> M;

    map<int, vector<int> >graph;

    rep(i, M){
        int A, B;
        cin >> A >> B;

        graph[A].push_back(B);
        graph[B].push_back(A);
    }

    for(int i = 1; i <= N; i++){
        sort(graph[i].begin(), graph[i].end());
    }

    for(int i = 1; i <= N; i++){
        cout << graph[i].size() << " ";
        rep(j, graph[i].size()){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}