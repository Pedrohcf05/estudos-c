# Estudos de C

Repositório com meus exercícios e anotações de estudo da linguagem C.

## Conteúdo

Cada pasta reúne os exercícios e, quando existe, um `guia.txt` com as anotações do tema:

| Pasta | Tema |
| --- | --- |
| `Tipos de variaveis` | Tipos de dados, entrada e saída, operações básicas |
| `Condicionais` | `if`, `else`, `switch` e conectivos lógicos |
| `lacos_de_repeticoes` | `for`, `while` e `do-while` |
| `funcoes` | Funções, `void` e retorno de valores |
| `vetores` | Vetores e strings |
| `matrizes` | Leitura e impressão de matrizes |
| `ponteiros` | Ponteiros e passagem por referência |
| `alocacao_dinamica_de_memoria` | `malloc`, `calloc` e vetores/matrizes dinâmicos |
| `arquivos` | Arquivos de texto |
| `arquivosBin` | Arquivos binários e structs |
| `exercicios_mitre` | Exercícios de laboratório |
| `Banco _de_questoes_p1` | Questões de preparação para prova |

## Como compilar e executar

```bash
gcc arquivo.c -o programa
./programa
```

Para ver avisos do compilador:

```bash
gcc -Wall -Wextra arquivo.c -o programa
```

## Guia de atualização do repositório

Sempre que terminar um exercício novo ou alterar uma anotação:

```bash
git status                       # 1. ver o que mudou
git add .                        # 2. preparar as mudanças
git commit -m "O que mudou"      # 3. registrar com uma mensagem curta
git push                         # 4. enviar para o GitHub
```

Exemplos de mensagens de commit:

- `Adiciona exercicio 2 de arquivos binarios`
- `Corrige validacao do intervalo em modifica`
- `Atualiza guia de ponteiros`

### Comandos úteis

| Comando | Para que serve |
| --- | --- |
| `git status` | Mostra o que foi alterado e o que está pronto para commit |
| `git log --oneline` | Lista o histórico de commits |
| `git diff` | Mostra as alterações linha por linha, antes do `git add` |
| `git pull` | Baixa do GitHub alterações feitas em outro computador |

### O que é enviado

O arquivo `.gitignore` está configurado para enviar **apenas** arquivos `.c`, `.h`, `.txt` e `.md`. Os executáveis gerados na compilação (como `a.out`) e arquivos de dados (como `alunos.dat`) ficam de fora.

Para versionar outro tipo de arquivo, acrescente uma linha ao `.gitignore`, por exemplo:

```
!*.dat
```

### Trabalhando em outro computador

```bash
git clone https://github.com/Pedrohcf05/estudos-c.git
```

Depois, antes de começar a estudar, rode `git pull` para trazer as últimas alterações.
