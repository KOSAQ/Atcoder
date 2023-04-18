N = int(input())
S = list(input())

point = set()

temp_x = 0
temp_y = 0
point.add((temp_x,temp_y))

for i in range(len(S)):

    if S[i] == "R":
        temp_x += 1
    if S[i] == "L":
        temp_x -= 1
    if S[i] == "U":
        temp_y += 1
    if S[i] == "D":
        temp_y -= 1
        
    if (temp_x,temp_y) in point:
            print("Yes")
            exit()
            
    point.add((temp_x,temp_y))


print("No")