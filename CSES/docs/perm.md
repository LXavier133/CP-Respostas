# Permutations

Agora que eu vejo a solução esperada eu realmente percebo que a minha não é tão boa, o certo e simples seria primeiro imprimir os de uma paridade e depois os de outro, garantindo sempre uma diferença de dois e de n-1.

Minha solução, porém, pega os opostos, n e 1, n-1 e 2, n-3 e 3 e assim por diante, no caso de n ser par teria-se o problema do termo n/2 que estaria ao lado de n/2 +1, então coloco n/2 na frente e no caso de ser impar, (n+1)/2 estaria ao lado de (n-1)/2

Assim, as difernças ficam sendo n/2, n-1, n-2, n-3, n-4 ... 4 3 4 3 2
