#include <stdio.h>
#include <stdlib.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N];
    int B[M];

    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    for(int j = 0; j < M; j++){
        scanf("%d", &B[j]);
    }

    int C[N+M];
    for(int i = 0; i < N; i++){
        C[i] = A[i];
    }
    for(int j = N; j < N+M; j++){
        C[j] = B[j-N];
    }

    int temp;
    for(int i = 0; i < N+M; ++i){
        for(int j = i+1; j < N+M; ++j){
            if(C[i] > C[j]){
                temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }

    for(int i = 0; i < N+M; i++){
        for(int j = 0; j < N; j++){
            if(A[j] == C[i]){
                printf("%d ", i+1);
            }
        }
    }
    printf("\n");
    for(int i = 0; i < N+M; i++){
        for(int j = 0; j < M; j++){
            if(B[j] == C[i]){
                printf("%d ", i+1);
            }
        }
    }

    return 0;
}