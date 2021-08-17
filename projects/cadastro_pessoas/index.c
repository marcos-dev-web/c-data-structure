#include <stdio.h>
#include <malloc.h>
#include "utils.h"
#include "functions/criarGrupoDePessoas.h"
#include "functions/criarPessoa.h"
#include "functions/adicionarPessoa.h"
#include "functions/entradaDeDados.h"
#include "functions/mostrarTodosOsDados.h"

int main()
{
  Pessoas *pessoasGrupo = criarGrupoDePessoas();

  Pessoas *listaDePessoas = entradaDeDados(pessoasGrupo);

  mostarTodosOsDados(listaDePessoas);

  return 0;
}