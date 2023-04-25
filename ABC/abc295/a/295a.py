import sys
N = int(input())
W = input().split()

for i in range(N):
    if W[i] == "and" or W[i] == "not" or W[i] == "that" or W[i] =="the" or W[i] == "you":
        print("Yes")
        sys.exit()
    else:
        continue
print("No")