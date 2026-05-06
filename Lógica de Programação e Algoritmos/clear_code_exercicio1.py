numeros = []

for i in range(5):
    numeros.append(float(input(f"Digite o {i+1}º numero: ")))

soma = sum(numeros)
print("Seu total é: ", soma)
