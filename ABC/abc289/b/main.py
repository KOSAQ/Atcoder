#https://shikasen-engineer.com/abc289-python/#B_8211

N, M = map(int, input().split())
a = list(map(int, input().split()))

ans = []
temp = []

for i in range(1, N+1):
    if i not in a:
        temp.insert(0, i)
        ans += temp
        temp.clear()
    else:
        temp.insert(0, i)

print(*ans)