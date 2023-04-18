N, K = map(int, input().split())
S = list(input())

limit = 0
for i in range(N):
    if S[i] == "o" and limit < K:
        limit += 1
    elif S[i] == "o" and limit == K:
        S[i] = "x"

print(*S, sep="")