N, K = map(int, input().split())
S = [list(input()) for i in range(N)]

S_prize = S[0:K]
S_prize.sort()

for i in range(K):
    print(*S_prize[i], sep="")