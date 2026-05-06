# importar as bibliotecas
import pandas as pd
import os 

dados = {
    "Id": [],
    "Nome": [],
    "qtd": [],
    "Preco": []
}

deseja_continuar = ""

while(deseja_continuar != "n"):
    print("\n ⌨️    Digite os dados: ")
    id = (input("id: "))
    nome = input("nome: ")
    qtd = int(input("Quantidade: "))
    preco = float(input("Preço: "))

    dados["id"].append(id)
    dados["nome"].append(nome)
    dados["Quanrtidade"].append(qtd)
    dados["Preço"].append(preco)

    deseja_continuar = input("Deseja continuar? (s/n)").strip().lower()
    #strip() -> tirar espaços em branco
    #lower() -> transformar em minúsculo

df = pd.DataFrame(dados)
print(df)

#definir o caminho onde será salvo o arquivo
os.chdir("C:\\Users\\45300805874\\Documents\\Gravação_Leitura_Arquivos_Python\\")

df.to_csv("dados.txt", sep="\t", index=False)
print("✅ Dados salvos em 'dados.csv'! ")

#Leitura dos arquivos
#try -> tenta executar esse bloco
try:
    df_lido = pd.read_csv("dados.txt", sep="\t")
    print(df_lido)
except FileNotFoundError: 
        print("\n ❌ Arquivo não encontrado! ")