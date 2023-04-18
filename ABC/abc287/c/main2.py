#https://zenn.dev/tmori/articles/2fc3cd14d27582
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
    
    def group_count(self):
        return len(self.roots())

if __name__ == "__main__":
    N, M = map(int, input().split())
    graph = [[] for _ in range(N)]
    uf = UnionFind(N)
    
    for _ in range(M):
        u, v = map(int, input().split())
        graph[u-1].append(v-1)
        graph[v-1].append(u-1)
        uf.union(u-1, v-1)
    
    one_num, two_num = 0, 0
    for i in graph:
        if len(i) == 1:
            one_num += 1
        elif len(i) == 2:
            two_num += 1
        else:
            print("No")
            exit()
    
    if one_num == 2 and uf.group_count() == 1:
        print("Yes")
    else:
        print("No")
    
    print(graph)