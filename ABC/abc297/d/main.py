A, B = map(int, input().split())

count=0
while True:
    if A == B:
        print(count)
        exit()
        
    if A > B:
        quotient = A // B
        remainder = A % B
        count += quotient
        A = remainder
        if A == 0:
            print(count-1)
            exit()
    
    if A < B:
        quotient = B // A
        remainder = B % A
        count += quotient
        B = remainder
        if B == 0:
            print(count-1)
            exit()
    