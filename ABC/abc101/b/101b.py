N = int(input())
N_original = N

S = 0

while(N >= 1):
    S += N % 10
    N //= 10


if N_original % S == 0:
    print("Yes")
else:
    print("No")
