#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool misjudge(int H, int M){
    int A, B, C, D;
    A = H / 10;
    B = H % 10;
    C = M / 10;
    D = M % 10;

    int missH = A * 10 + C;
    int missM = B * 10 + D;

    if(0 <= missH && missH <= 23 && 0 <= missM && missM <= 59){
        return false;
    }
    else{
        return true;
    }
}

int main(void){
    int H, M;
    cin >> H >> M;

    while(misjudge(H, M)){
        M++;
        if(M == 60){
            H++;
            M = 0;
        }
        if(H == 24){
            H = 0;
        }
    }
    cout << H << " " << M << endl;
    return 0;
}