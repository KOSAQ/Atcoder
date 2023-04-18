#https://techmath-project.com/2023/02/26/abc290/#C_-_Max_MEX
N, K = map(int, input().split())
A = set(map(int, input().split()))

content = 0

for i in range(K):
    if i in A:
        content += 1
    else:
        break
            
print(content)
