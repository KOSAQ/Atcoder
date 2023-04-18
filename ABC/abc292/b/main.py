N,Q = map(int, input().split())
event = [list(map(int, input().split())) for i in range(Q)]

condition = [0] * N

for i in range(Q):
    if event[i][0] == 3:
        if condition[event[i][1]-1] >= 2:
            print("Yes")
        else:
            print("No")
    elif event[i][0] == 1:
        condition[event[i][1]-1] += 1
    else:
        condition[event[i][1]-1] += 2