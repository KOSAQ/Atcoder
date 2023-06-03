#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(void){
    int H, W;
    cin >> H >> W;
    vector<vector<char> > S(H * 2, vector<char>(W * 2, '@'));

    rep(i, H){
        rep(j, W){
            cin >> S[i][j];
        }
    }

    rep(i, H){
        rep(j, W){
            if(S[i][j] == 's'){
                if(S[i][j+1] == 'n'){//yoko
                    if(S[i][j+2] == 'u'){
                        if(S[i][j+3] == 'k'){
                            if(S[i][j+4] == 'e'){
                                rep(k, 5){
                                    cout << i+1 << " " << j+k+1 << endl;
                                }
                            }
                        }
                    }
                }
                if(S[i+1][j] == 'n'){//tate
                    if(S[i+2][j] == 'u'){
                        if(S[i+3][j] == 'k'){
                            if(S[i+4][j] == 'e'){
                                rep(k, 5){
                                    cout << i+k+1 << " " << j+1 << endl;
                                }
                            }
                        }
                    }
                }
                if(S[i+1][j+1] == 'n'){
                    if(S[i+2][j+2] == 'u'){
                        if(S[i+3][j+3] == 'k'){
                            if(S[i+4][j+4] == 'e'){
                                rep(k, 5){
                                    cout << i+k+1 << " " << j+k+1 << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    rep(i, H){
        rep(j, W){
            if(S[i][j] == 'e'){
                if(S[i][j+1] == 'k'){//yoko
                    if(S[i][j+2] == 'u'){
                        if(S[i][j+3] == 'n'){
                            if(S[i][j+4] == 's'){
                                rep(k, 5){
                                    cout << i+1 << " " << j+(4-k)+1 << endl;
                                }
                            }
                        }
                    }
                }
                if(S[i+1][j] == 'k'){//tate
                    if(S[i+2][j] == 'u'){
                        if(S[i+3][j] == 'n'){
                            if(S[i+4][j] == 's'){
                                rep(k, 5){
                                    cout << i+(4-k)+1 << " " << j+1 << endl;
                                }
                            }
                        }
                    }
                }
                if(S[i+1][j+1] == 'k'){
                    if(S[i+2][j+2] == 'u'){
                        if(S[i+3][j+3] == 'n'){
                            if(S[i+4][j+4] == 's'){
                                rep(k, 5){
                                    cout << i+(4-k)+1 << " " << j+(4-k)+1 << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}