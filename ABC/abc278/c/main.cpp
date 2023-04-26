//https://programming-hiroba.com/abc278-c/

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N, Q;
    cin >> N >> Q;

    set<pair<int, int> > follow;

    rep(i, Q){
        int T, A, B;
        cin >> T >> A >> B;

        if(T == 1){
            follow.insert(make_pair(A, B));
        }
        if(T == 2){
            follow.erase(make_pair(A, B));
        }
        if(T == 3){
            if(follow.count(make_pair(A, B)) && follow.count(make_pair(B, A))){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}