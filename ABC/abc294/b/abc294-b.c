#include <stdio.h>
#include <string.h>

int main(void){
    int H,W;
    scanf("%d %d", &H, &W);

    int A[H][W];
    char S[H][W];

    for(int i = 0;i < H; i++){
        for(int j = 0; j < W; j++){
            scanf("%d", &A[i][j]);
        }
    }


    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(A[i][j] == 0){
                S[i][j] = '.';
            }
            else{
                S[i][j] = A[i][j] + 64;
            }
        }
    }

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            printf("%c", S[i][j]);
        }
        printf("\n");
    }
}