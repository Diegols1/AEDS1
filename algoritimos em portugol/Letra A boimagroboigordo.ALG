algoritmo "semnome"
var
   numeroboi, pesoboi,boimagro, boigordo, numeroboigordo, numeroboimagro: inteiro
   simnao :caracter

inicio
boigordo <- 1
boimagro <- 100000
Para numeroboi de 1 ate 90 faca
     escreval ("Qual o peso do boi ", numeroboi, "?")
     leia (pesoboi)
      se pesoboi>boigordo entao
         boigordo <- pesoboi
         numeroboigordo <- numeroboi
      fimse
      se pesoboi<boimagro entao
         boimagro <- pesoboi
         numeroboimagro <- numeroboi
      fimse

     escreval ("Quer continuar?[s/n]")
     leia (simnao)
          se simnao = "n" entao
             interrompa
          fimse
     fimpara
     escreval ("O boi mais gordo é o N ", numeroboigordo, "e pesa: ", boigordo)
     escreval ("O boi mais magrro é o N ", numeroboimagro, "e pesa: ", boimagro)
fimalgoritmo