N = int(input())
Q = int(input())

for i in range(Q):
    a = list(map(int, input().split()))
    if len(a) == 2:
        print(a[0],a[1])
    elif len(a) == 3:
        print(a[0], a[1], a[2])