#include <stdio.h>

int main() {

int bispo, rainha, torre;

torre = 1;
bispo = 1;


printf(" |||          XADREZ           |||\n");

//Torre
printf("\nTorre:\n\n");
while (torre <= 5)
{
    printf("Direita\n");
    torre++;
}

//Bispo
printf("\nBispo:\n\n");
do
{
printf("Cima, Direita \n");
bispo++;
} while (bispo <= 5);

//Rainha
printf("\nRainha:\n\n");
for (rainha = 1; rainha <= 8; rainha++)
{
    printf("Esquerda\n");
}

  int cavalo = 0;

  //cavalo
printf("\nCavalo \n\n");

while (cavalo < 1)
{
for (int i = 0; i < 2; i++)
{
    printf("Baixo\n");
}
printf("Esquerda");
cavalo++;

}



    return 0;
}

