programa {
  funcao inicio() {
    inteiro idade
    cadeia possui_cnh

    escreva("Digite sua idade: ") 
    leia(idade)

    escreva("Você tem CNH? ")
    leia(possui_cnh)

    se(idade>=18 e possui_cnh == "sim"){
      escreva("Pode dirigir! 🚗💨")
    }
    senao{
      escreva("Você não pode dirigir! 😥❌🚗")
    }

  }
}
