//conjectura do somatorio de 1/1+3/2+5/3+7/5...+99/50
algoritmo "ConjecturaSomatorio"
var
   soma: real
   numerador, denominador, termo: real
   i: inteiro

inicio
   soma <- 0
   numerador <- 1
   denominador <- 1

   para i de 1 ate 50 faca
      termo <- numerador / denominador
      soma <- soma + termo
      numerador <- numerador + 2
      denominador <- denominador + 1
   fimpara

   escreval("A soma da série é igual a ", soma)
fimalgoritmo