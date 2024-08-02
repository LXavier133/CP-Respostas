# Building Roads

Como todas as ruas são de mão dupla, basta todas as cidades conseguirem chegar à cidade 1.

Assim, a estratégia utilizada foi rodar um DFS para cada cidade não visitada por DFS anteriores e adicionar a raíz dessa árvore de DFS em uma estrada para a cidade 1.
