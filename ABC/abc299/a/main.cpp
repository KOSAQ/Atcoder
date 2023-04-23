#include <bits/stdc++.h>
using namespace std;

int main(void){
    int N;
    string S;
    cin >> N;
    cin >> S;
    vector<int> out(2);
    int mid;
    int count = 0;

    for(int i = 0; i < N; i++){
        if(S[i] == '|'){
            out[count] = i;
            count++;
        }
        if(S[i] == '*'){
            mid = i;
        }
    }
    
    if((out[0] < mid) && (mid < out[1])){
        cout << "in" << endl;
    }
    else{
        cout << "out" << endl;
    }


}