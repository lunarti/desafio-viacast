## Validação de código

####Primeiramente se tratando do arquivo em C ([`reverse_string.c`](./reverse_string.c)):

1. Em situações usuais, o código irá funcionar como esperado?

Foi constatado que este não funcionaria de acordo com a lógica planejada,
a primeira função 'reverseString' consegue cumprir seu papel e inverter a string, porém a função 'reverseStringInPlace' não retorna a resposta esperada.

2. Existe alguma situação em que não irá funcionar?

A função 'reverseStringInPlace' começa invertendo o caracter '/0' que simboliza o fim de uma String, então todos seus retornos são Strings vazias.

3. Caso exista alguma situação em que o código não irá funcionar, quais alterações seriam necessárias para corrigir os problemas?

Foi possível obter contornar a inversão de '/0' ao subtrair 1 de 'N' como pode ser visto em ([`reverse_string.c`](./reverse_string.c)) na linha 15.
Porém a resposta continuava não ser correta, apresentando a não inversão de um par de caracteres. Ao trocar operador '<' para '<=' na estrutura 'for' na linha 16,
permitiu a varredura completa da String em questão. Retornando o resultado correto.

4. Pensando na legibilidade, facilidade de manutenção por outros desenvolvedores, e extensibilidade, você faria alguma refatoração no código?

Comentaria o código, tentando evidenciar um pouco da lógica aplicada para cada função. Também adicionaria um 'out' na função 'reverseStringInPlace' assim como
a função 'reverseString' apresenta.

####Agora abordando o ([`shapes.py`](./shapes.py)):

1. Em situações usuais, o código irá funcionar como esperado?
2. Existe alguma situação em que não irá funcionar?
3. Caso exista alguma situação em que o código não irá funcionar, quais alterações seriam necessárias para corrigir os problemas?
4. Pensando na legibilidade, facilidade de manutenção por outros desenvolvedores, e extensibilidade, você faria alguma refatoração no código?




## Implementação

Você precisa implementar uma função em Python que recebe um único argumento `n` e retorna o `n`-ésimo elemento da sequência de Fibonacci. Essa função deve ser extremamente otimizada, pois trata-se de uma função crítica do projeto, a qual será chamada com alta frequência e com valores grandes de `n`. (`n <= 450`).

Foi realizado um estudo sobre o desempenho de diferentes métodos de calcular a série de fibonacci que pode ser visto em ([`Jupyter Notebook`](./fibo.ipynb))
A partir do estudo foi possível conclui que o método ótimo seria utilizando list comprehension e funções lambdas disponível em: ([`fibo.py`](./fibo.py))