import networkx as nx
#from matplotlib import pyplot as plt

N, M = map(int, input().split())
edge = [list(map(int, input().split())) for i in range(M)]

g1 = nx.Graph()
point = []
for i in range(N):
    g1.add_node(i+1)
    point.append(i+1)

for j in range(M):
    g1.add_edge(edge[j][0], edge[j][1])
    

#pos = nx.spring_layout(g1, seed=0)
#plt.figure(figsize=(10,10))
#nx.draw_networkx(g1, pos)
#plt.show()

if nx.is_connected(g1):
    if nx.is_forest(g1):
        print("Yes")
        exit()
print("No")
