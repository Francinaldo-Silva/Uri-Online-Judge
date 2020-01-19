op = input()
soma = 0
C_out = 1
C_in = 11
qt = 0
N_entra = C_out
entra = C_in

for i in range(144):
    valor = float(input())

    if (N_entra + entra == 0):
        C_out += 1
        C_in -= 1
        N_entra = C_out
        entra = C_in

    if (N_entra > 0):
        N_entra -= 1
        continue

    if (entra > 0):
        entra -= 1
        soma += valor
        qt += 1
        continue  

if (op == 'S'):
    print('%.1f' % soma)
elif (op == 'M'):
    print('%.1f' % (soma / float(qt)))