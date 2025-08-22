N1 = int(input("Digite o valor de N1: "))
N2 = int(input("Digite o valor de N2: "))

if N1 < N2:
    print(f"Todos os números entre {N1} e {N2}:")
    for i in range(N1+1,N2):
        print(f"{i}")
else:
    print(f"Todos os números entre {N2} e {N1}:")
    for i in range(N2+1,N1):
        print(f"{i}")