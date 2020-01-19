while True:
    N = int(input())

    if (N == 0):
        break

    result =  []

    for i in range(N):
        tmp = []
        for j in range(N):
            tmp.append(1)
        result.append(tmp)

    valor = 1
    cima = 0
    esq = 0
    baixo = N - 1
    direita = N - 1

    if (N % 2 == 0):
        meio = N / 2

    else:
        meio = (N + 1) / 2


    while (valor <= meio):
        i = esq
        while (i <= direita):
            result[cima][i] = valor
            result[baixo][i] = valor
            i+=1

        i = (cima + 1)
        while ( i < baixo):
            result[i][esq] = valor
            result[i][direita] = valor
            i+=1

        valor+=1
        cima+=1
        baixo-=1
        esq+=1
        direita-=1

    for i in range(N):
        tx = ''
        for j in range(N):
            tx += " %3d" %result[i][j]
        print(tx[1:])
    print("")