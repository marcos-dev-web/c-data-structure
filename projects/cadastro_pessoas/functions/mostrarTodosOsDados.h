

void mostarTodosOsDados(Pessoas *p)
{
  int i;

  printf("\n=TODOS OS DADOS=\n");
  for (i = 0; i < p->totalPessoas; i++)
  {
    printf("\n------------------------------\n");
    printf("NOME:  %s\n", p->pessoas[i]->nome);
    printf("IDADE: %d\n", p->pessoas[i]->idade);
    printf("SEXO:  %c", p->pessoas[i]->sexo);
    printf("\n------------------------------\n");
  }
}