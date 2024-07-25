# Missing Number

Apesar do problema ser bem direto ao ponto, usei um truque famoso de ou exclusivo XOR (^)

- a^a=0
- a^b=b^a

Então, por exemplo para a entrada

>5
>2 3 1 5

Conforme os números entram

5^4^3^2^1

5^4^3^2^1^2 = 5^4^3^1^2^2 = 5^4^3^1

5^4^3^1^3 = 5^4^1^3^3 = 5^4^1

5^4^1^1 = 5^4

5^4^5 = 4^5^5 = 4

resultando na saída desejada
