N = int(input())
X = list(map(int, input().split()))

sum = 0
count = 0
X.sort()
for i in range(1*N,4*N):
    sum += X[i]
    count += 1
ans = sum / count
print(ans)