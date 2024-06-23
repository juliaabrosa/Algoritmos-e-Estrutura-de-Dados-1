# Julia Rosa

## Exercício avaliativo 1.

### 860. Lemonade Change

O problema proposto disponível na plataforma Leetcode, consistia em verificar se os 5 clientes da barra de limonada receberiam o troco ou não. O problema informava que cada limonada custava $5 e que 
os clientes pagariam apenas com notas de $5, $10 ou $20. A entrada do programa eram 5 valores dados or 5 clientes e a sáida deveria ser True, caso todos os clientes recebecem o troco ou False, 
caso um dos clientes não recebesse por falta de caixa. 

#### Casos de teste:
Entrada: [5,5,5,10,20] 
Saída esperada: True.

Entrada: [5,5,10,10,20]
Saída esperada: False.

Entrada: [20,5,5,5,5]
Saída esperada: False.

Em princípio o programa funcionou corretamente. Ao passar no Doctor memmory, ele mostrou três erros na linha 46, que seria a linha que só tem o '}' do main. 
