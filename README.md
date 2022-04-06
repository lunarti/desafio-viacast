## Validação de código

### Primeiramente se tratando do arquivo em C ([`reverse_string.c`](./reverse_string.c)):

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

### Agora abordando o ([`shapes.py`](./shapes.py)):

1. Em situações usuais, o código irá funcionar como esperado?

O código funciona como o esperado, não foram encontrados erros nos resultados quando utilizado conforme fornecido.

2. Existe alguma situação em que não irá funcionar?

No cálculo do perímetro do triângulo isóceles a variável 'base' é utilizada sem a referência 'this' isso faz com que seja utilizado a variável global, 
que fortunamente o código fornecido possui, porém em chamadas a esse método sem que haja a existência de uma variável 'base' resultará em erros.

3. Caso exista alguma situação em que o código não irá funcionar, quais alterações seriam necessárias para corrigir os problemas?

A adição da palavra reservada 'this' resolveria o problema citado, resultando em 'this.base'.

4. Pensando na legibilidade, facilidade de manutenção por outros desenvolvedores, e extensibilidade, você faria alguma refatoração no código?

Utilizando o conceito de heranças em OOP seria possível economizar algumas linhas ao se criar a inicialização dos atributos.
Isso seria possível criando uma Classe Pai chamada Shapes contendo os parâmetros utilizados e para que haja um fácil entendimento do uso dessas classes
se faz necessário a utilização de Metadados como Functions Anotations.
A criação de setters e getters com condições para o input dos métodos também otimizaria a função, como por exemplo: não permitir valores negativos.

## Implementação

Foi realizado um estudo sobre o desempenho de diferentes métodos de calcular a série de fibonacci que pode ser visto em ([`Jupyter Notebook`](./fibo.ipynb))
A partir do estudo foi possível conclui que o método ótimo seria utilizando list comprehension e funções lambdas disponível em: ([`fibo.py`](./fibo.py))