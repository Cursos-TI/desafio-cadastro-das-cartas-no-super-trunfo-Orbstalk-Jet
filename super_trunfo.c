#include <stdio.h>

int main(){
    
    //carta1
    char Estado1; 
    char Codigo1[13]; //[13] maximo de caracteres sendo 12 as entradas e 1 null, logica valendo para cidade tbm.
    char Cidade1[30]; 
    unsigned long int Populacao1; // unsigned long int para permitir maior armazenamento de tamanho
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;
     
    //carta2
    char Estado2;
    char Codigo2[13];
    char Cidade2[30];
    unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;
    
    //Orientações ao usuário
    printf("Seja bem vindo ao Super Trunfo\n");
    printf("Por favor insira os dados de suas cartas para serem exibidas e comparadas\n");
    
    //Inputs da Carta 1 
    printf("Carta1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &Estado1);//espaço deixado no começo dos parenteses para anular linha nula criada pela terminação do input sendo Enter, tbm se aplica a carta 2

    printf("Código em até 12 caracteres: ");
    scanf("%12s", Codigo1);
    
    printf("Cidade: ");
    scanf(" %[^\n]", Cidade1);//%[^\n] permiti haver espaços entre strings

    printf("População: ");
    scanf("%lu", &Populacao1);

    printf("Área em km²: ");
    scanf("%f", &Area1);

    printf("PIB em bilhoes de reais: ");
    scanf("%f", &PIB1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos1);

    //Inputs da Carta 2
    printf("Carta2\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &Estado2);

    printf("Código em até 12 caracteres: ");
    scanf("%12s", Codigo2);
    
    printf("Cidade: ");
    scanf(" %[^\n]", Cidade2);

    printf("População: ");
    scanf("%lu", &Populacao2);

    printf("Área em km²: ");
    scanf("%f", &Area2);

    printf("PIB em bilhoes de reais: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &Pontos_Turisticos2);
    
    //calculos de densidade populacional e Pib per Capita das cartas 1 e 2 
    //Carta 1 
    float Densidadepopu1 =(float) Populacao1 / Area1; //casting por (float), logica se aplicando aos outros tbm
    float PibCapita1 = (PIB1 * 1000000000.0f) / (float) Populacao1; //(PIB1 * 1000000000.0f) priorazação do calculo do Pib para converter bilhoes em reais, se aplica aos outros tbm
    //Carta2
    float Densidadepopu2 = (float) Populacao2 / Area2;
    float PibCapita2 = (PIB2 * 1000000000.0f) / (float) Populacao2;

    //Saidas dos dados inseridos das cartas 1 e 2 para o usuário
    //Carta 1
    printf("Dados da Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %lu\n", Populacao1);
    printf("Área: %.2f km²\n", Area1); //%.2f serve para exibição de duas casas decimais para ficar mais elegivel, logica se aplicando aos outros tbm seu uso
    printf("PIB em bilhoes de reais: %.2f de reais\n", PIB1); 
    printf("Número de pontos turísticos: %d\n", Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopu1);
    printf("PIB per Capita: %.2f\n", PibCapita1);
    //Carta2
    printf("Dados da Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %lu\n", Populacao2);
    printf("Área: %.2f km²\n", Area2); 
    printf("PIB em bilhoes de reais: %.2f de reais\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidadepopu2);
    printf("PIB per Capita: %.2f\n", PibCapita2);

    //Calculo de variaveis para Super Poder 
    float Super_Poder1 = (float) Populacao1 + (float) Area1 + (float) PIB1 + (float) Pontos_Turisticos1 + (float) PibCapita1 + (1.0f / Densidadepopu1); //(1.0f/ Demsidadepopu) priorizar para calcular primeiro se aplicando ao outro tbm
    float Super_Poder2 = (float) Populacao2 + (float) Area2 + (float) PIB2 + (float) Pontos_Turisticos2 + (float) PibCapita2 + (1.0f / Densidadepopu2);

    //Comparações logica
    int Compa_Populacao = Populacao1 > Populacao2;//se a Populacao1 for maior em comparação com a Populacao 2 o operador > vai verificar verdadeiro=1 ou falso=1
    int Compa_Area = Area1 > Area2;
    int Compa_Pib = PIB1 > PIB2;
    int Compa_PontTuri = Pontos_Turisticos1 > Pontos_Turisticos2;
    int Compa_Densinver = Densidadepopu1 < Densidadepopu2; // menor vence
    int Compa_Pibcapi = PibCapita1 > PibCapita2;
    int Compa_Super = Super_Poder1 > Super_Poder2;
    
    //Saidas das comparações entre as cartas para o usuário
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu %d\n", 2 - Compa_Populacao, Compa_Populacao);//2-Compa_Populacao se a variavel for verdadeira ou seja 1 vai sobrar 1 se for falso que é 0 vai sobrar 2 ou seja a carta 2 venceu
    printf("Área: Carta %d venceu %d\n", 2 - Compa_Area, Compa_Area);
    printf("PIB: Carta %d venceu %d\n", 2 - Compa_Pib, Compa_Pib);
    printf("Pontos Turísticos: Carta %d venceu %d\n", 2 - Compa_PontTuri, Compa_PontTuri);
    printf("Densidade Populacional: Carta %d venceu %d\n", 2 - Compa_Densinver, Compa_Densinver);
    printf("PIB per Capita: Carta %d venceu %d\n", 2 - Compa_Pibcapi, Compa_Pibcapi);
    printf("Super Poder: Carta %d venceu %d\n", 2 - Compa_Super, Compa_Super);

    return 0;
}
