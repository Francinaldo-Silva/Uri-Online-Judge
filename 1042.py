numeros = input().split()
numeros = list(map(int, numeros))
for i in sorted(numeros):
    print(i)
print('')
for i in numeros:
    print(i)