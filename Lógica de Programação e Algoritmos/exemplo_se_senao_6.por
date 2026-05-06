programa {
  funcao inicio() {
    inteiro valor_compra
    cadeia possui_cupom

    escreva("Qual é o valor da compra? ")
    leia(valor_compra)

    escreva("Possui cupom de desconto? ")
    leia(possui_cupom)

    se(valor_compra>=200 ou possui_cupom == "sim"){
      escreva("Você ganhou um desconto de 15%!🎉🥳👯‍♀️ ")
    }
    senao{
      escreva("Infelizmente você não ganhou cupom😭😿😞")
    }
  }
}
