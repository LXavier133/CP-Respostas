# Exponentiation

Normalmente, uma exponenciação de a^b levaria b operações de multiplicação, tendo complexidade O(b), mas, caso escrevamos b em binário, podemos apenas multiplicar as potências de 2.

Exemplo 3^10 = 3^(1010)b = 3^8 * 3^2

Assim, deve-se primeiro calcular todas as potências de a até a potência de 2 mais próxima de b, para isso, são necessárias log(b) operações e log(b) operações para o resultado final.

Assim, pode-se realizar a tarefa em O(log(b)).
