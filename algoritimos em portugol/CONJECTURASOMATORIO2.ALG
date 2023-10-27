algoritmo "ConjecturaSomatorio2"
var
   numerador, denominador, termo,soma: real
   i: inteiro

inicio
   soma <- 0

   para i de 1 ate 10 faca
      numerador <- i
      denominador <- i * i

      se i % 2 = 0 entao
         termo <- -numerador / denominador
      senao
         termo <- numerador / denominador
      fimse

      soma <- soma + termo
   fimpara

   escreval("A soma da série é igual a ", soma)
fimalgoritmo