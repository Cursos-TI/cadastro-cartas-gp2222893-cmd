#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    // Propriedades: Área, PIB, Pontos Turísticos, População, Código da carta, Cidade e Estado.

    float Area1, Area2;
    float Pib1, Pib2;
    int Pontosturisticos1, Pontosturisticos2;
    int Populacao1, Populacao2;
    char Codigo1[3], Codigo2[3];
    char Cidade1[20], Cidade2[20];
    char Estado1[20], Estado2[20];

  // Área para entrada de dados

  printf("carta 1\n");
  
  printf("digite a população da Cidade:");
  scanf("%d", &Populacao1);
   
  printf("digite o tamanho da Area1 km2:");
  scanf("%f", &Area1);

  printf("digite o Pib:");
  scanf("%f", &Pib1);

  printf("digite o numero de Pontosturisticos:");
  scanf("%d", &Pontosturisticos1);

  printf("digite o Estado:");
  scanf("%20s", Estado1);

  printf("digite o codigo da carta:");
  scanf("%3s", Codigo1);
  
  printf("digite o nome da cidade:");
  scanf("%20s", Cidade1);


  // Área para exibição dos dados da cidade

  printf("carta 1\n");
  printf("Estado: %s\n", Estado1);
  printf("Cidade: %s\n", Cidade1);
  printf("População: %d\n", Populacao1);
  printf("Número de pontos turísticos: %d\n", Pontosturisticos1);
  printf("PIB: %.2f\n", Pib1);
  printf("Área (km2): %.2f\n", Area1);
  printf("Código da carta: %s\n", Codigo1);


return 0;
}
