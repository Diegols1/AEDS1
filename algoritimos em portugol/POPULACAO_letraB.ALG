algoritmo "Populacao"
var
   paisa, paisb: real
   numerodeanos: inteiro

inicio
   paisa <- 90000000
   paisb <- 200000000
   numerodeanos <- 0

   enquanto paisa <= paisb faca
      paisa <- paisa + (paisa * 0.03)
      paisb <- paisb + (paisb * 0.015)
      numerodeanos <- numerodeanos + 1
      escreval ("No ano:", numerodeanos,"A população do pais A sera= ", paisa, "a população do pais B sera=", paisb)
   fimenquanto

   escreval("Número de anos necessários para que a população de A ultrapasse B: ", numerodeanos)
fimalgoritmo