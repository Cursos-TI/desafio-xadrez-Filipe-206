#include <stdio.h>

int main() {

int bispo, rainha, torre;

torre = 1;
bispo = 1;
rainha = 1;

printf(" |||          XADREZ           |||\n");

printf("\nTorre:\n\n");
while (torre <= 5)
{
    printf("Direita\n");
    torre++;
}


printf("\nBispo:\n\n");
do
{
printf("Cima, Direita \n");
bispo++;
} while (bispo <= 5);

printf("\nRainha:\n\n");
for (rainha; rainha <= 8; rainha++)
{
    printf("Esquerda\n");
}






 return 0;   
}