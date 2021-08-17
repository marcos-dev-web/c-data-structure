#define clear_linux_terminal() printf("\033[H\033[J")
#define MAX_PESSOAS 3

typedef struct
{
  char *nome;
  int idade;
  char sexo;
} Pessoa;

typedef struct
{
  Pessoa *pessoas[MAX_PESSOAS];
  int totalPessoas;
} Pessoas;