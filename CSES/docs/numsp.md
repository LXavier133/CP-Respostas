# Number Spiral

Seja max(x,y)=a e min(x,y)=b

Seja o quadrado que o número se encontra os números que tem como linha ou coluna

Perceba que, o maior número no quadrado do desejado é a^2,  caso a seja ímpar esse está na posição (a,1) e caso seja par (1,a).

O menor, por sua vez, tem valor (a-1)^2+1 e está na posição oposta ao maior.

Assim, caso x=b e a%2=0, nosso número é a^2-(b-1), caso x=b e a%2=1 então nosso número é ((a-1)^2+1)-(b-1).

Analogamente para y=b: a%2=1 temos a^2-(b-1) e a%2=0 temos ((a-1)^2+1)-(b-1).
