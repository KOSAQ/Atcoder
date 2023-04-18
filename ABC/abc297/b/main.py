S = list(input())

flag = False
first = []
second = []
z = 0


for i in range(8):
    if S[i] == "B":
        first.append(i+1)
    elif S[i] == "R":
        second.append(i+1)
    elif S[i] == "K":
        z = i+1
        
if (first[0] + first[1]) % 2 == 1:
    if second[0] < z:
        if z < second[1]:
            print("Yes")
            exit()
            
print("No")
