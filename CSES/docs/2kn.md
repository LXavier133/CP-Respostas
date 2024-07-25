# Two Knights

Resolveremos esse problema, que é muito mais matemático do que de CP, ao achar o número de casos totais de se posicionar dois cavalos e subtrair os que ambos se atacam.


O número total de posições é simples, n^2 posições para o primeiro posicionado, n^2-1 para o segundo e como os dois são idênticos, divide-se por dois.

O número de casos em que ambos se atacam é o número de retângulos 2x3 que cabem no tabuleiro. São n-1 posições para o lado de tamanho 2 e n-2 para o de tamanho 3, para a resposta deve-se multiplicar por dois pois o retângulo pode estar em pé ou deitado e por dois para definir em quais extremidades opostas do retângulo os cavalos se encontram.

Assim, a fórmula final é (n^2)(n^2-1)/2 -4(n-1)(n-2)
