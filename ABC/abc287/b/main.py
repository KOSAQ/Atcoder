N, M = map(int, input().split())
S = [int(input()) for i in range(N)]
T = [int(input()) for i in range(M)]

for i in range(N):
    S[i] %= 1000

count = 0
for i in range(N):
    for j in range(M):
        if S[i] == T[j]:
            count += 1
            break

print(count)