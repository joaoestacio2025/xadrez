#include <stdio.h>

void movendoCavalo()
{
  int i = 0;
  printf("Movento do cavalo\n");
  while (1 == 1)
  {

    for (int j = 0; j < 2; j++)
    {
      printf("baixo\n");
    }
    printf("esquerda\n");
    i++;
    if (i == 1)
    {
      break;
    }
  }
}

void movimento(int n, char *direcao)
{
  printf("%s\n", direcao);
  if (n > 1)
  {
    movimento(n - 1, direcao);
  }
}

void movimentoBispo(int n)
{
  for (int i = 0; i < 1; i++)
  {
    printf("direita\n");
    for (int j = 0; j < 1; j++)
    {
      printf("cima\n");
      if (n > 1)
      {
        movimentoBispo(n - 1);
      }
    }
  }
}

int main()
{
  printf("Movendo torre para direita\n");
  movimento(5, "direita");

  printf("Movendo bispo na diagonal\n");
  movimentoBispo(2);

  printf("Movendo rainha para esquerda\n");
  movimento(8, "Esquerda");

  movendoCavalo();

  return 0;
}