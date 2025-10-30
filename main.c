#include <stdio.h>

void movendoCavalo()
{
  int i = 0;
  printf("Movento do cavalo\n");
  while (i < 1)
  {

    for (int j = 0; j < 2; j++)
    {
      printf("baixo\n");
    }
    i++;
    printf("esquerda\n");
  }
}

int main()
{
  printf("Movendo torre para direita\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Direita\n");
  }

  printf("Movendo bispo na diagonal\n");
  int i = 0;
  while (i < 2)
  {
    i++;
    printf("Cima, Direita\n");
  }

  printf("Movendo rainha para esquerda\n");
  int j = 0;
  do
  {
    printf("Esquerda\n");
    j++;
  } while (j < 8);
  movendoCavalo();

  return 0;
}