#https://techmath-project.com/2023/02/13/abc289/#C_-_Coverage
N, M = map(int, input().split())

A = []
for i in range(M):
    C = int(input())
    a = set(map(int, input().split()))
    A.append(a)

count = 0

for i in range(2**M):
    s = set()
    for j in range(M):
        if i >> j & 1:
            s = s.union(A[j])
    if len(s) == N:
        count += 1
print(count)