#include <bits/stdc++.h>

using ll = long long;
using namespace std;

bool firstasc_seconddesc(pair<int, int>& x, pair<int, int>& y) {
  if(x.first == y.first){
    return y.second < x.second;
  }
  else{
    return x.first  < y.first;
  }
}

bool firstdesc_secondasc(pair<int, int>& x, pair<int, int>& y) {
  if(x.first == y.first){
    return x.second < y.second;
  }
  else{
    return y.first < x.first;
  }
}

int main(void){
    vector<pair<int, int> > v;
    
    v.push_back(make_pair(1,4));
    v.push_back(make_pair(3,8));
    v.push_back(make_pair(2,5));
    v.push_back(make_pair(8,3));
    v.push_back(make_pair(3,9));
    v.push_back(make_pair(6,7));
    v.push_back(make_pair(6,4));

    for(auto it = v.begin(); it != v.end(); it++){
        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }

    //first昇順、second昇順
    cout << "first昇順、second昇順" << endl;
    sort(v.begin(), v.end());
    for(auto it = v.begin(); it != v.end(); it++){
        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }
    //first昇順、second降順
    cout << "first昇順、second降順" << endl;
    sort(v.begin(), v.end(), firstasc_seconddesc);
    for(auto it = v.begin(); it != v.end(); it++){
        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }
    


    //first降順、second降順
    cout << "first降順、second降順" << endl;
    sort(v.rbegin(), v.rend());
    for(auto it = v.begin(); it != v.end(); it++){
        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }
    //first降順、second昇順
    cout << "first降順、second昇順" << endl;
    sort(v.begin(), v.end(), firstdesc_secondasc);
    for(auto it = v.begin(); it != v.end(); it++){
        cout << "(" << it->first << ", " << it->second << ")" << endl;
    }

    return 0;
}