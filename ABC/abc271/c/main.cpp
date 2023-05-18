//https://atcoder.jp/contests/abc271/editorial/4930

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int N;
    cin >> N;
    vector<int> a(N);

    rep(i, N){
        cin >> a[i];
    }

    vector<bool> volume(N + 2, false);
    int sell = 0;

    rep(i, N){
        if(a[i] > N){
            sell++;
        }
        else if(volume[a[i]]){
            sell++;
        }
        else{
            volume[a[i]] = true;
        }
    }

    int L = 1;
    int R = N + 1;

    while(1){
        while(volume[L]){
            L++;
        }
        while(R != 0 && volume[R] == false){
            R--;
        }

        if(sell >= 2){
            sell -= 2;
            volume[L] = true;
        }
        else{
            if(L >= R){
                break;
            }
            volume[R] = false;
            sell++;
        }
    }

    cout << L - 1 << endl;
    return 0;
}