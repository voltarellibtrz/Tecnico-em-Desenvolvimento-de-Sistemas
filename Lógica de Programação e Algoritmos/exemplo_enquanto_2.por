programa {
  funcao inicio() {
    cadeia resposta = "sim"

    enquanto(resposta == "sim"){
      escreva("\n Está chovendo?🌧️")
      leia(resposta)

      se(resposta == "sim"){
        escreva("\n Leve um guarda-chuva!☔ ")
      }
    }
  }
}
