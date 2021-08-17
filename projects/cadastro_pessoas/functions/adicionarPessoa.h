
int adicionarPessoa(Pessoas *p, Pessoa *pv)
{
  if (p->totalPessoas >= MAX_PESSOAS)
    return -1;

  if (p->totalPessoas < 0)
  {
    p->pessoas[0] = pv;
    p->totalPessoas = 1;
  }
  else
  {
    p->pessoas[p->totalPessoas] = pv;
    p->totalPessoas = p->totalPessoas + 1;
  }

  return 0;
}