from collections import Counter

N = int(input())
A = list(map(int, input().split()))

c = Counter(A)
d = list(c.values())


pair = 0

for i in range(len(d)):
    if d[i] % 2 == 0:
        pair += d[i] / 2
    else:
        pair += (d[i]-1)/2
print(int(pair))

