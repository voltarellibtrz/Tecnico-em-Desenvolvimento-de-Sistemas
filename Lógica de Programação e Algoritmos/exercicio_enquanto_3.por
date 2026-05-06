programa {
  funcao inicio() {
    inteiro numero, soma=0

    enquanto(soma <= 100){
      escreva("\n Digite um número: ")
      leia(numero)

      soma = soma + numero
    }
    escreva("A soma é: ",soma)
  }
}
