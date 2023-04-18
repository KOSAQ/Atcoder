import bisect

N, M = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

C = A
C.extend(B)
C_sorted = sorted(C)

ansA=[]
ansB=[]

for i in range(N):
    ansA.append(bisect.bisect_left(C_sorted, A[i])+1)
for j in range(M):
    ansB.append(bisect.bisect_left(C_sorted, B[j])+1)
    
print(*ansA)
print(*ansB)
    
