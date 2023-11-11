#include <bits/stdc++.h>

using ll = long long;
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i <= (int)(n); i++)

bool desc_asc(pair<int, int>& left, pair<int, int>& right) {
  if (left.first == right.first) {
    return left.second < right.second;
  } else {
    return right.first < left.first;
  }
}

int main(void){
    //input-----
    int N;
    cin >> N;
    string S[N];
    rep(i, N){
        cin >> S[i];
    }
    //----------

    vector<pair<int, int> > win;

    rep(i, N){
        int win_count = 0;
        rep(j, N){
            if(S[i][j] == 'o'){
                win_count++;
            }
        }
        win.push_back(make_pair(win_count, i + 1));
    }
    sort(win.begin(), win.end(), desc_asc);

    for(auto it = win.begin(); it != win.end(); it++){
        cout << it->second << " ";
    }

    
    return 0;
}