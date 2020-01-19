lista = []
for i in range(0,6):
    n = (float(input()))
    lista.append(n)
pares = 0
for v in lista:
    if(v>0):
        pares += 1
print("%d valores positivos" %pares)