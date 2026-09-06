# sistema de criptografia

Cifra de César com Progressão Aritmética

Sistema de criptografia em C baseado na Cifra de César clássica, com uma variação que aplica um deslocamento (shift) progressivo a cada letra da mensagem, seguindo uma progressão aritmética.

## Como funciona

A Cifra de César tradicional desloca cada letra do alfabeto em um número fixo de posições. Neste projeto, o deslocamento **não é fixo**: ele cresce a cada letra, de acordo com uma progressão aritmética definida pelo usuário.

A fórmula usada para calcular o deslocamento de cada letra é:

```
shift_atual = shift_inicial + (posição_da_letra * razão)
```

Onde:
- `shift_inicial` é o deslocamento base, informado pelo usuário
- `razão` é o quanto o deslocamento aumenta a cada letra, também informado pelo usuário
- `posição_da_letra` é o índice da letra dentro da mensagem (começando em 0)

Isso torna a cifra mais resistente a tentativas simples de quebra, já que não existe um único deslocamento fixo para toda a mensagem.

## Funcionalidades

- Suporte a letras maiúsculas e minúsculas
- Caracteres que não são letras (espaços, números, pontuação) permanecem inalterados
- Deslocamento progressivo configurável através de shift inicial e razão da progressão aritmética
- Tratamento do "estouro" do alfabeto (a contagem volta ao início após `Z`/`z`) usando aritmética modular

## Como usar

1. Compile o programa:
   ```
   gcc cifra_cesar.c -o cifra_cesar
   ```
2. Execute:
   ```
   ./cifra_cesar
   ```
3. Digite a mensagem que deseja criptografar
4. Digite o valor do shift inicial
5. Digite a razão da progressão aritmética
6. O programa exibirá a mensagem criptografada

## Exemplo

Mensagem: `abcd`
Shift inicial: `1`
Razão: `4`

| Letra | Posição | Shift aplicado | Resultado |
|---|---|---|---|
| a | 0 | 1 | b |
| b | 1 | 5 | g |
| c | 2 | 9 | l |
| d | 3 | 13 | q |

Saída: `bglq`

## Tecnologias

- Linguagem C
- Bibliotecas padrão: `stdio.h`, `stdlib.h`, `string.h`

## Contexto

Projeto desenvolvido como parte da disciplina de Prototipagem de Sistemas Computacionais.
