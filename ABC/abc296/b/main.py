S = [list(input()) for i in range(8)]


for i in range(8):
    for j in range(8):
        if S[i][j] == "*":
            col = 8-i
            row = j+1


print(chr(row+96), col, sep="")