n = []
for i in range (0,6):
    num=(float(input()))
    n.append(num)
pos = 0
soma = 0.0
for v in n:
    if(v>0):
        pos += 1
        soma += v
media = soma / float(pos)
print("%d valores positivos" %pos)
print("%.1f" %media)