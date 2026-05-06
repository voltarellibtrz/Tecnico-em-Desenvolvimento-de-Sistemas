# importar as bibliotecas
import pandas as pd
import os 

dados = {
    "Nome": [],
    "Disciplina": [],
    "Nota": []
}

deseja_continuar = ""

while(deseja_continuar != "n"):
    print("\n ⌨️    Digite os dados: ")
    nome = input("Nome: ")
    disciplina = input("Disciplina: ")
    nota = float(input("Nota: "))
    
    dados["Nome"].append(nome)
    dados["Disciplina"].append(disciplina)
    dados["Nota"].append(nota)

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