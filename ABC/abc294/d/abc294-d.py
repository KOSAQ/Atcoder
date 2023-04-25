N, Q = map(int, input().split())

notgo = set()
call_people = 1
min_people = 1

for i in range(Q):
    event = list(map(int, input().split()))
    if event[0] == 1:
        notgo.add(call_people)
        #print(call_people,"追加")
        call_people += 1
    if event[0] == 3:
        while True:
            if min_people in notgo:
                print(min_people)
                min_people = 1
                break
            else:
                min_people += 1
    if event[0] == 2:
        notgo.remove(event[1])
        #print(event[1],"消去")
