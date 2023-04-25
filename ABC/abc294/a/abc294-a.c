#include <stdio.h>

int main(void){
    
    int N;
    int A[N];

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < N; i++){
        if(A[i] %2 == 0){
            printf("%d ", A[i]);
        }
    }
    
    return 0;
}