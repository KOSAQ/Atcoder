#https://qiita.com/Waaaa1471/items/f37676ded952e0f14906#cfour-variables

def divisor(N):
    count = 0
    for i in range(1,N+1):
        if i**2 > N:
            break
        if N % i != 0:
            continue
        
        count += 1
        if N // i != i:
            count += 1
    return count

if __name__ == "__main__":
    N = int(input())
    
    table = [0] * N
    
    for i in range(1,N):
        table[i] = divisor(i)
        
    ans = 0
    
    for i in range(1,N):
        ab = i
        cd = N - i
        ans += table[ab] * table[cd]
        
    print(ans)