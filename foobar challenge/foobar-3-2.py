import numpy
def det(x):
    try:
        if len(x) == 1:
            return x[0][0]
        elif len(x) == 2:
            return x[0][0] * x[1][1] - x[0][1] * x[1][0]
        else:
                # a square matrix of dimension*dimension construct
            dimension = len(x)
                # the determinant accumulator var.
            d = 0
            for i in range(0, dimension):
                    # the sub-matrix the determinant has to be evaluated of, recursively
                submatrix = []
                
                for j in range(1, dimension):
                    submatrix_row = []
                    for k in range(0, dimension):
                        if k == i or j == 0: continue
                        submatrix_row.append(x[j][k])
                    submatrix.append(submatrix_row)

                d = d + (-1) ** (2+i) * x[0][i] * det(submatrix)
            return d
    except:
        print('Error: received array of arrays is not a representation of a square matrix.')
        exit()

def cramers_mat(x):
    phi = []
    xi = []
    flag = -1
    dimension = len(x)
        #-1 assembling the initialised equation array
    for a in range(dimension):
        phi.append([0 for temp in range(dimension)])
        #-2 populating the equation array
    for i in range(dimension):
        for j in range(dimension):
            phi[i][j] += x[j][i]
        #-3 looking for non-achieveable ore transition states [phi is ready]
    for u in range(dimension):
        temp = [0 for v in range(dimension)]
        if temp == phi[u]:
            flag = u
            break
        #-4 populating the second Cramer's matrix 'xi' [xi is ready]
    xi = [0.0 for v in range(dimension)]
    if flag != -1:
        phi[flag] = [1.0 for v in range(dimension)]
        xi[flag] = 1.0
            #-2.5 substep: populating phi with '-1' (RHS numeric coefficient of unknowns is -1)
    for i in range(dimension):
        for j in range(dimension):
            if flag != -1 and i == flag: break
            if i == j: phi[i][j] += -1.0
        #-5 evaluating the unknowns using Cramer's rule
    soln = []
    det_phi = det(phi)
    D = [[0.0 for w in range(dimension)] for v in range(dimension)]
    for i in range(dimension):
            #-5.5 populating the D array
        for u in range(dimension):
            for v in range(dimension):
                D[u][v] = phi[u][v]
        for j in range(dimension):
            D[j][i] = xi[j]
        soln.append(float(det(D))/det_phi)
    return soln
    
def solution(m):
    dimension = len(m)
    flag = []
    soln = []
    row_sum = []
        # converting elements to floating-point numbers
    for i in range(dimension):
        for j in range(dimension):
            m[i][j] = float(m[i][j])
        # generating the stochastic matrix
    for i in range(dimension):
        row_sum.append(sum(m[i]))
    for i in range(dimension):
        for j in range(dimension):
            if row_sum[i] != 0: m[i][j] /= row_sum[i]
        # processing the stochastic matrix
    for u in range(dimension):
        temp = [0 for v in range(dimension)]
        if temp == m[u]:
            flag.append(u)
    temp = cramers_mat(m)
    for i in flag:
        soln.append(temp[i])
    y = sum(soln)
    for i in range(len(soln)):
        soln[i] = soln[i]/float(y)
    for i in range(len(soln)):
        for j in range(1,100000):
            t = [k*j for k in soln]
            flag = []
            for u in range(len(t)):
                if t[u] % 1 == 0:
                    flag.append(u)
            if len(flag) == len(t):
                t.append(sum(t))
                for k in range(len(t)):
                    t[k] = int(t[k])
                return t
    
#matrix = [[0, 1/2, 0, 0, 0, 1/2], [4/9, 0, 0, 3/9, 2/9, 0], [0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0], [0, 0, 0, 0, 0, 0]]
matrix = [[0, 2/3, 1/3, 0, 0], [0, 0, 0, 3/7, 4/7], [0, 0, 0, 0, 0], [0, 0, 0, 0,0], [0, 0, 0, 0, 0]]
#print(solution(matrix))

k = [[0.0 for w in range(len(matrix))] for v in range(len(matrix))]
print(matrix)
for i in range(len(matrix)):
    for j in range(len(matrix)):
        k[i][j] = matrix[i][j]
for i in range(0,3):
    print(k)
    k = numpy.dot(k,matrix)
print(k, numpy.dot([1,0,0,0,0],matrix))
