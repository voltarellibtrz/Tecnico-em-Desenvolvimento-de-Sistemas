programa {
  funcao inicio() {
    real raio, altura, area, volume, pi=3.14

    escreve("Digite o raio: ")
    leia(raio)

    escreva("Digite a altura: ")
    leia(altura)

    area = 2*pi*raio*(raio+altura)
    escreva("\n A área é: ", area)

    volume = pi*raio*raio*altura
    escreva("\n O volume é: ", volume)


  }
}
