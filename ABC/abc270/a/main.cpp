#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int A, B;
    cin >> A >> B;

    vector<vector<bool> > point(2, vector<bool>(3, false));
    while(A > 0){
        if(A - 4 >= 0){
            point[0][2] = true;
            A -= 4;
        }
        if(A - 2 >= 0){
            point[0][1] = true;
            A -= 2;
        }
        if(A - 1 >= 0){
            point[0][0] = true;
            A--;
        }
    }
    while(B > 0){
        if(B - 4 >= 0){
            point[0][2] = true;
            B -= 4;
        }
        if(B - 2 >= 0){
            point[0][1] = true;
            B -= 2;
        }
        if(B - 1 >= 0){
            point[0][0] = true;
            B--;
        }
    }

    int ans = 0;
    
    if(point[0][0] == true || point[1][0] == true){
        ans++;
    }
    if(point[0][1] == true || point[1][1] == true){
        ans += 2;
    }
    if(point[0][2] == true || point[1][2] == true){
        ans += 4;
    }
    

    cout << ans << endl;
    return 0;
}