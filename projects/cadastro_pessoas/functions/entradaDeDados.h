

Pessoas *entradaDeDados(Pessoas *listaDePessoas)
{
  while (listaDePessoas->totalPessoas < MAX_PESSOAS)
  {
    clear_linux_terminal();
    char *nome = (char *)malloc(sizeof(char) * 10);
    int *idade = (int *)malloc(sizeof(int) * 2);
    char *sexo = (char *)malloc(sizeof(char));

    printf("NOME:  ");
    scanf("%s", nome);

    printf("IDADE: ");
    scanf("%d", idade);

    printf("SEXO:  ");
    scanf("%s", sexo);

    Pessoa *pessoa = criarPessoa(nome, idade, sexo);

    adicionarPessoa(listaDePessoas, pessoa);
  }

  clear_linux_terminal();

  return listaDePessoas;
}