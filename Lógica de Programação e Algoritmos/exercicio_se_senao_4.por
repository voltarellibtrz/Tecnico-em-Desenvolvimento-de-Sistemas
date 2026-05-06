programa {
  funcao inicio() {
    inteiro lado1, lado2, lado3

    escreva("Qual triângulo pode ser?: ")
    leia(lado1, lado2, lado3)

    se(lado1 == lado2 e lado1 == lado3 e lado2 == lado3){
    escreva("Equilátero")
    }
   senao se(lado1 == lado2 ou lado2 == lado3 ou lado1 == lado3){
      escreva("Isósceles")
    }
    senao se(lado1 != lado2 e lado2 != lado3 != lado1){
      escreva("Escaleno")
    }
}
}