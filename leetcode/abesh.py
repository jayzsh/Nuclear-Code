inp = 50
    # inputs: 3, 35, 50

min_prod = 1
max_prod = inp**2
qset = []
rset = [[] for i in range(max_prod + 1)]

for i in range(inp):
    qset.append(i+1)
    
for i in range(1, max_prod + 1):
    for j in range(inp):
        for k in range(inp):
            if qset[j] * qset[k] == i:
                rset[i].append((qset[j],qset[k]))

c = 0                
for i in range(len(rset)):
    c += len(rset[i]) ** 2

print(c)
