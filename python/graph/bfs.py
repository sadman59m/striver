import queue


def bfs(V, adj):
    vis = [0] * V
    ls = []
    q = queue.Queue()
    q.put(0)
    vis[0] = 1

    while not q.empty():
        node = q.get()
        ls.append(node)
        for it in adj[node]:
            if not vis[it]:
                q.put(it)
                vis[it] = 1
    return ls


V, E = map(int, input().split())

adj = [[] for _ in range(V)]

for _ in range(E):
    a, b = map(int, input().split())
    adj[a].append(b)
    adj[b].append(a)

ans = bfs(V, adj)

print(ans)
