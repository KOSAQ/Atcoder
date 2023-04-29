#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    double A, B;
    cin >> A >> B;

    double temp = B / A;
    temp *= 1000;
    double ans = roundf(temp);
    ans /= 1000;
    
    cout << fixed << setprecision(3) << ans << endl;
    return 0;
}