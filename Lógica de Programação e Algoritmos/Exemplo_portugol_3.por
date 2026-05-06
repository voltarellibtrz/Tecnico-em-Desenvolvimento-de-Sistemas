programa {
  funcao inicio() {
    real raio, perimetro, area, diametro, pi = 3.14

    escreva("Digite o raio: ")
    leia(raio)

    perimetro = 2*pi*raio
    escreva("\n Perimetro = ", perimetro)

    area = pi*raio*raio
    escreva("\n Área = ", area)

    diametro = 2*raio
    escreva("\n Diametro = ", diametro)
  }
}
