
Pessoa *criarPessoa(char *nome, int *idade, char *sexo)
{
  Pessoa *p = (Pessoa *)malloc(sizeof(Pessoa));

  p->nome = nome;
  p->idade = *idade;
  p->sexo = *sexo;

  return p;
}
