#include <stdio.h>

// declaracao dos voids

//TORRE: recursividade
void torre(int torreV)
{
    if (torreV > 0)
    {
    printf("Direita\n");
    torre (torreV - 1);
    } 
}

//Bispo: recursividade + loop aninhado
void bispo(int bispoV )
{
    if (bispoV > 0)
    {
    for (int i = 0; i < 1; i++)
    {
for (int j = 0; j < 1; j++)
{
    printf("Cima\n");
    printf("Direita\n");
}
    }
    bispo(bispoV - 1);
    }
    
 





}

//rainha: recursividade.
void rainha(int rainhaV )
{
if (rainhaV > 0)
{
    printf("Esquerda\n");
rainha (rainhaV - 1);
}
}

//Cavalo: recursividade + loop aninhados.
void Cavalo(int cavaloV){

    for (int i = 0; i < cavaloV ; i++)
    {
    for (int j = 0; j < 2 ; j++)
    {
   printf("Cima\n");
    }
    printf("Direita\n");
    }
    
}

int main() {

printf("==== XADREZ ====\n");

//printf´s + recursividades 

printf("\nTorre\n\n");
torre(5);

printf("\nBispo\n\n");
bispo(5);

printf("\nRainha\n\n");
rainha(8);

printf("\nCavalo\n\n");
Cavalo(1);

    return 0;
}