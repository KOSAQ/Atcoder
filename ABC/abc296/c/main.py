N, X = map(int, input().split())
A = set(map(int, input().split()))

if X == 0:
    print("Yes")
    exit()

for num in A:
    if num + X in A:
        print("Yes")
        exit()

print("No")