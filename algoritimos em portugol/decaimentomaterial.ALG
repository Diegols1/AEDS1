//c) Um determinado material radioativo perde a metade de sua massa a cada 50 segundos. Dada a
//massa inicial, em gramas, fazer um algoritmo que determine o tempo necessário para que essa
//massa se torne menor do que 0.5 gramas. Escreva ao final a massa inicial, a massa final e o tempo
//calculado em horas, minutos e segundos.

algoritmo "C"
var
   material: real
   temp,temposegundos,h,m,s :inteiro
inicio
    escreval("Digite o peso inicial em gramas do material")
    leia (material)
      enquanto material>0.5 faca
      temp<-temp+1
      material<-material/2
      fimenquanto
      temposegundos<-temp*50
      h <- tempoSegundos \ 3600
      m <- (tempoSegundos % 3600) \ 60
      s <- tempoSegundos % 60
      escreval ("A quantidade de vezes que o material decaiu ate ficar menor que 0.5g foi=", temp)
      escreval ("O Peso final do material foi=", material)
      escreval ("O tempo foi de ", h,":",m,":",s)
fimalgoritmo