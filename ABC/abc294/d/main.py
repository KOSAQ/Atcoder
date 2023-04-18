#https://note.com/kai1023/n/n4826d28f8fa2#946e29c5-a0cd-451d-b21b-6f8930665b2c

N, Q = map(int, input().split())
call = 1
go = set()

for i in range(Q):
    event = list(map(int, input().split()))
    if event[0] == 1:
        continue
    elif event[0] == 3:
        while True:
            if call not in go:
                print(call)
                break
            else:
                call += 1
    else:
        go.add(event[1])
