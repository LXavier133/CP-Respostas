# Monsters

Para acharmos as posições que o Aventureiro chega antes dos Monstros, basta progredir um quadrado em todas as direções tanto do Aventureiro quanto dos Monstros, a melhor forma de realizar essa operação é um BFS em que já inicia-se a fila com os Monstros e depois o Aventureiro, feito isso, basta um backtracking para obter o caminho desejado
