import random

def solution(l):
    length = len(l)
    cc = 0
    register = []
    index_register = []
    for i in range(length):
        for j in range(i+1, length):
            if l[j] % l[i] == 0:
                for k in range(j+1, length):
                    if l[k] % l[j] == 0:
                        cc += 1
                        register.append((l[i], l[j], l[k]))
                        index_register.append((i, j, k))
    print(register)
    print(index_register)
    return cc

h = [0,0,0,1,1,1,2,2]
#random.shuffle(h)
print(solution(h))
