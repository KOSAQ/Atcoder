import copy
flag = True

N = int(input())
A = [list(map(int, input().split())) for i in range(N)]
B = [list(map(int, input().split())) for i in range(N)]

for i in range(N):
    for j in range(N):
        if A[i][j] == 1 and B[i][j] != 1:
            flag = False
if flag == True:
    print("Yes")
    exit()
flag = True

A_rotate = copy.deepcopy(A)
for i in range(N):
    for j in range(N):
        A_rotate[i][j] = A[N-j-1][i]
for i in range(N):
    for j in range(N):
        if A_rotate[i][j] == 1 and B[i][j] != 1:
            flag = False
if flag == True:
    print("Yes")
    exit()
flag = True


A_rotate2 = copy.deepcopy(A_rotate)
for i in range(N):
    for j in range(N):
        A_rotate2[i][j] = A_rotate[N-j-1][i]
for i in range(N):
    for j in range(N):
        if A_rotate2[i][j] == 1 and B[i][j] != 1:
            flag = False
if flag == True:
    print("Yes")
    exit()
flag = True


    
    
A_rotate3 = copy.deepcopy(A_rotate2)
for i in range(N):
    for j in range(N):
        A_rotate3[i][j] = A_rotate2[N-j-1][i]
for i in range(N):
    for j in range(N):
        if A_rotate3[i][j] == 1 and B[i][j] != 1:
            flag = False
if flag == True:
    print("Yes")
    exit()
print("No")


