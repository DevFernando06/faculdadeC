# Questão 2

Crie um algoritmo que informe **quais permissões um usuário possui**, com base no seu nível de acesso:

## Níveis de usuário e permissões

- **Admin** (`char nivel = 'a'`)  
  - Criar usuário  
  - Criar postagem  
  - Adicionar comentário  

- **Moderador** (`char nivel = 'm'`)  
  - Criar postagem  
  - Adicionar comentário  

- **Usuário comum** (`char nivel = 'c'`)  
  - Adicionar comentário  

## Instruções

1. Receber como entrada o nível do usuário (`'a'`, `'m'` ou `'c'`).  
2. Verificar o nível informado.  
3. Exibir na tela as permissões correspondentes ao nível.  
4. Caso o nível informado seja inválido, exibir mensagem de erro.
