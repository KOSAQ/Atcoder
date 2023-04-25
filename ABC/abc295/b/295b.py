import numpy as np

def bomb(Power, Row, Column, B, b_i, b_j):
    for i in range(Row):
        for j in range(Column):
            if (np.linalg.norm(np.array([i,j]) - np.array([b_i,b_j]), ord=1) <= Power) and (B[i][j] == "#"):
                B[i][j] = "."
            

R, C = map(int, input().split())
B = [list(input()) for i in range(R)]

for i in range(R):
    for j in range(C):
        if (B[i][j] != "#") and (B[i][j] != "."):
            s = B[i][j]
            Power = int(s)
            bomb(Power, R, C, B, i, j)
            B[i][j] = "."
            
for i in B:
    print(*i, sep="")
    