# Atividade5

# O código tem como finalidade fazer a soma de todos os elementos de uma matriz quadrada que será fornecida pelo usuário.
# Para começar é solicitado ao usuário qual será a quantidade de linhas e de colunas, necessitando de apenas um número já que a matriz é quadrada.
# Após receber o tamanho da matriz threads foram utilizadas para receber os números que irão compor a matriz e montá-la.
# Com a montagem da matriz completa o programa somará todos os números dela e retornará ao usuário o resultado final.

# O Makefile é composto pela função make, make run e make clean.
# A função make compila o arquivo tipo C e gera um arquivo binário, nesse caso tendo que ser adicionado o "-pthread" no make para que ele reconheça os comandos dessa       biblioteca.
# O make run usa o arquivo binário para executar o código.
# E o make clean tem a função de apagar o arquivo binário que foi anteriormente gerado no make.
