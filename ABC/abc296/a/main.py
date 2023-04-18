N = int(input())
S = list(input())

flag = True
for i in range(N-1):
    if S[i] == S[i+1]:
        flag = False

if flag:
    print("Yes")
else:
    print("No")