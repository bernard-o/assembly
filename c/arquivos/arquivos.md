
# Abrindo e fechando um arquivo

## Compiladores

- gcc, Clang, etc
`#include <fcntl.h>`

- CL
`#include <io.h>`


`int (open(char *filename, int flags));`

- filename = Nome do arquivo a ser aberto. Tal nome deve respeitar o requisitos do S.O. senão função falhará. 

- flags = Flags representando como tal arquivo deve ser aberto (escrita, leitura, execução, etc). 

### São opções de flags

- O_RDONLY (read only) - Usado em caso de leitura do arquivo. 

- O_WRONLY (write only) - Usado em caso de escrita no arquivo. 

- O_RDWR (read and write) - Arquivo será aberto tanto para leitura quanto para escrita. 

- O_CREAT (create) - Usado em caso de criação de arquivo. Caso arquivo já exista, o mesmo permanecerá intacto. Caso ele não exista, ele será criado vazio. 

- O_TRUNC (truncate) - Usado para limpar/esvaziar um arquivo ao abri-lo. 

DICA: Para abrir um arquivo e, antes de começar a trabalhar com ele, você quer ter certeza de que ele está vazio, então as flags devem ser: 

`O_CREAT | O_WRONLY | O_TRUNC`

- O_APPEND (append) - Usado para abrir um arquivo e escrever sempre ao final de seu conteúdo original. 

- O_DIRECT (direct) - Evita que o conteúdo do arquivo seja concentrado em memória (buffering) antes de enviado para arquivo. A degradação na performance fica visível ao usar tal flag. 

- O_SYNC (synchronous) - Somente permite que função `write` retorne após a mesma terminar de criar arquivo. Sem tal flag a função `write` é assíncrona, ou seja, a função retorna mesmo sem que o processo de criação do arquivo tenha terminado. 

## Quebra de linha (Unix e Windows)

No Unix, um caractere chamado LF (`line feed`) é inserido ao final de cada linha, de cada arquivo de texto. Ele representa quebra de linha e pode ser lido como `\n`. 
Já no Windows, dois caracteres são inseridos, são eles: CR LF (`carriage return` e `linie feed`). Esses caracteres juntos representam quebra de linha e podem sr lidos como `\r\n`.

Quando um arquivo criado num determinado S.O. é aberto no outro, usando um editor de textos não robusto, comportamentos inesperados acontecem: 

- Arquivo criado num S.O. baseado em Unix aberto no Windows: 
Todo o conteúdo do arquivo de texto pode ser observado numa só linha, pois aquele S.O. interpreta quebra de linha somente se CR LF estiverem juntos ao final de cada linha. 

- Arquivo criad no Windows aberto num S.O. baseado em Unix: 
Ao final de cada linha do arquivo de texto pode ser observado o caractere CR, que não é necessário para quebra de linha, logo, ele não tem propósito algum ali e, caso o arquivo seja um script, este não será executado por erro de sintaxe. 

A função `open` possui duas flags voltadas para resolver este problema de compatibilidade entre os S.O. são elas: 

- O_BINARY (binary) - O arquivo será aberto com seus dados intactos, ou seja, função `open` não buscará fazer tradução/adaptação de um arquivo criado num S.O. aberto no outro. 

- O_TEXT - Os dados do arquivo serão traduzidos/adaptados para o S.O. atual antes de arquivo ser aberto. 