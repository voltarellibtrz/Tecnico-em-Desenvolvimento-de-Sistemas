# importar as bibliotecas
import pandas as pd
import os 

dados = {
    "Nome": [],
    "Idade": [],
    "Cidade": []
}

deseja_continuar = ""

while(deseja_continuar != "n"):
    print("\n ⌨️    Digite os dados: ")
    nome = input("Nome: ")
    idade = int(input("Idade: "))
    cidade = input("Cidade: ")
    
    dados["Nome"].append(nome)
    dados["Idade"].append(idade)
    dados["Cidade"].append(cidade)

    deseja_continuar = input("Deseja continuar? (s/n)").strip().lower()
    #strip() -> tirar espaços em branco
    #lower() -> transformar em minúsculo

df = pd.DataFrame(dados)
print(df)

print("\n 📁 Escolha o formato para salvar os dados: ")
print(" 1 - CSV \n2 - JSON \n3 - TXT")
escolha_arquivo = input("Digite o número do formato desejado: ")

#definir o caminho onde será salvo o arquivo
os.chdir("C:\\Users\\45300805874\\Documents\\Gravação_Leitura_Arquivos_Python\\")

if(escolha_arquivo == "1"):
    df.to_csv("dados.csv", index=False)
    print("✅ Dados salvos em 'dados.csv'! ")
elif(escolha_arquivo == "2"):
    df.to_json("dados.json", orient="records", indent=4)
    print("✅ Dados salvos em 'dados.json'! ")
elif(escolha_arquivo == "3"):
    df.to_csv("dados.txt", sep="\t", index=False)
    print("✅ Dados salvos em 'dados.csv'! ")
else: 
    print(" ⚠️  Escolha inválida! Os dados não foram salvos! ")

#Leitura dos arquivos
ler_arquivo = input("\n 📁 Deseja carregar os dados? (s/n): ").strip().lower()
if(ler_arquivo == "s"):
    print("\n 📁Escolha o formato para ler o arquivo: ")
    print(" 1 - CSV \n2 - JSON \n3 - TXT")
    escolha_formato = input("Digite o número do formato desejado: ")
    #try -> tenta executar esse bloco
    try:
        if(escolha_formato == "1"):
            df_lido = pd.read_csv("dados.csv")
        elif(escolha_formato == "2"):
            df_lido = pd.read_json("dados.json")
        elif(escolha_formato == "3"):
            df_lido = pd.read_csv("dados.txt", sep="\t")
        else: 
            print(" ⚠️ Formato Inválido! ")
            df_lido = None
        
        if(df_lido is not None):
            print("\n 📊  Dados Carregados: ")
            print(df_lido)
    except FileNotFoundError: 
        print("\n ❌ Arquivo não encontrado! ")