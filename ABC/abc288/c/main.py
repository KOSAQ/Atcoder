#https://qiita.com/Waaaa1471/items/24f3c3475eb462ad26ac#cdont-be-cycle
from collections import defaultdict

class UnionFind():
    def __init__(self, n):
        self.n = n
        self.parents = [-1] * n
        
    def find(self, x):
        if self.parents[x] < 0:
            return x
        else:
            self.parents[x] = self.find(self.parents[x])
            return self.parents[x]
    
    def union(self, x, y):
        x = self.find(x)
        y = self.find(y)
        
        if x== y:
            return
        
        if self.parents[x] > self.parents[y]:
            x, y = y, x
        
        self.parents[x] += self.parents[y]
        self.parents[y] = x
    
    def same(self, x, y):
        return self.find(x) == self.find(y)
    
    def roots(self):
        return [i for i , x in enumerate(self.parents) if x < 0]

if __name__ == "__main__":
    N, M = map(int, input().split())
    uf = UnionFind(N)
    count = 0
    
    for _ in range(M):
        a, b = [int(ab)-1 for ab in input().split()]
        
        if uf.same(a, b):
            count += 1
        uf.union(a, b)
    
    print(count)