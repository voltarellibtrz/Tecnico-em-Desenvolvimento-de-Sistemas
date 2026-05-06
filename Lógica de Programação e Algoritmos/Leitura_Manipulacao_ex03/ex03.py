# importar as bibliotecas
import pandas as pd
import os 

dados = {
    "Id": [],
    "descricao": [],
    "status": []
}

deseja_continuar = ""

while(deseja_continuar != "n"):
    print("\n ⌨️    Digite os dados: ")
    id = input("id: ")
    descricao = input("descricao: ")
    status = input("status: ")
    
    dados["id"].append(id)
    dados["Descricao"].append(descricao)
    dados["status"].append(status)

    deseja_continuar = input("Deseja continuar? (s/n)").strip().lower()
    #strip() -> tirar espaços em branco
    #lower() -> transformar em minúsculo

df = pd.DataFrame(dados)
print(df)

#definir o caminho onde será salvo o arquivo
os.chdir("C:\\Users\\45300805874\\Documents\\Leitura_Manipulacao_ex03\\")

df.to_csv("tarefas.json", sep="\t", index=False)
print("✅ Dados salvos em 'tarefas.json'! ")

#Leitura dos arquivos
#try -> tenta executar esse bloco
try:
    df_lido = pd.read_json("tarefas.json", sep="\t")
    print(df_lido)
except FileNotFoundError: 
        print("\n ❌ Arquivo não encontrado! ")