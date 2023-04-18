#https://qiita.com/Waaaa1471/items/9b9f231a8b549ef60862#bcall-the-id-number

H,W = map(int, input().split())

A = [list(map(int, input().split())) for _ in range(H)]


count = 0

for i in range(2**(H+W-2)):
    h,w = 0, 0
    seen = set()
    seen.add(A[0][0])
    
    for j in range(H+W-2):
        if i>>j & 1:
            h += 1
            
            if h == H:
                break
            if A[h][w] in seen:
                break
            
        else:
            w += 1
            
            if w == W:
                break
            if A[h][w] in seen:
                break
            
        seen.add(A[h][w])
        
    
    else:
        count += 1
        
print(count)