#include <stdio.h>

int main(){
    
    //carta1
    char Estado1; 
    char Codigo1[6]; //[6] maximo de caracteres sendo 5 as entradas e 1 null, valendo para Cidade tbm
    char Cidade1[20]; 
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;
    //carta2
    char Estado2;
    char Codigo2[6];
    char Cidade2[20];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;

    //print trunfo
    printf("Seja bem vindo ao Super Trunfo\n");
    printf("Por favor insira os dados de suas cartas\n");

    //Inputs da Carta 1 
    printf("Carta1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &Estado1);//espaço deixado no começo dos parenteses para anular linha nula criada pela terminação do input sendo Enter, tbm se aplica a carta 2

    printf("Código em 5 caracteres: ");
    scanf("%5s", Codigo1);
    
    printf("Cidade: ");
    scanf("%19s", Cidade1);

    printf("População: ");
    scanf("%d", &Populacao1);

    printf("Área em km²: ");
    scanf("%f", &Area1);

    printf("PIB em reais: ");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos1);

    //Inputs da Carta 2
    printf("Carta2\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &Estado2);

    printf("Código em 5 caracteres: ");
    scanf("%5s", Codigo2);
    
    printf("Cidade: ");
    scanf("%19s", Cidade2);

    printf("População: ");
    scanf("%d", &Populacao2);

    printf("Área em km²: ");
    scanf("%f", &Area2);

    printf("PIB em reais: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos2);

    //Saidas dos dados inseridos das cartas 1 e 2 
    printf("Dados da Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1); //%.2f serve para exibição de duas casas decimais para ficar mais elegivel se aplicando tbm ao PIB
    printf("PIB em reais: %.2f de reais\n", PIB1); 
    printf("Número de pontos turísticos: %d\n", Pontos_Turisticos1);

    printf("Dados da Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area2); 
    printf("PIB em reais: %.2f de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Pontos_Turisticos2);

    return 0;
}
