l = int(input())
operacao = input()
soma = 0
for i in range(12):
    for j in range(12):
        valor = float(input())
        if(i == l):
            soma += valor
if(operacao == 'S'):
     print("%.1f" %soma)
elif(operacao == 'M'):
     print("%.1f" %(soma/12.0))