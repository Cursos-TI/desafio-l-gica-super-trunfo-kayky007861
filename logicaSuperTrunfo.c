#include <stdio.h>

int main() {
   //Abaixo serão declaradas as variáveis que serão utilizadas no programa

   char Estado1[50], Estado2[50];//Estados 
   char cidade1[50], cidade2[50];//Cidades
   char codigo1[50],codigo2[50];//Códigos
   int populacao1, populacao2;//|Populações
   float Area1, Area2;//Áreas 
   float PIB1, PIB2;//PIBs
   int pontos_turisticos1,pontos_turisticos2;//Pontos Turisticos
   float densidade1,densidade2;//Densidades
   float PIB_per_capita1,PIB_per_capita2;//PIBs per capita

   //Abaixo será feita a interação com o usuario da carta 1

   printf("***Cadstro da carta 1***\n");//Inicia o cadastro da carta 1
   
   printf("Digite o seu Estado: \n");//Pergunta Estado da carta 1
   scanf("%s",Estado1);//caixa de entrada do Estado

   printf("Digite o seu codigo: \n");//Pergunta o Código da carta 1
   scanf("%s",codigo1);//Caixa de entrada do código

   printf("Digite a sua Cidade: \n");//Pergunta a Cidade da carta 1
   scanf("%s",cidade1);//caixa de entrada da Cidade

   printf("Digite a sua Populacao: \n");//Pergunta a População da carta 1
   scanf("%d",&populacao1);//caixa de entrada da população

   printf("Digite a sua Area: \n");//Pergunta a Àrea da carta 1
   scanf("%f",&Area1);//caixa de entrada da Área

   printf("Digite o seu PIB: \n");//Pergunta o PIB da carta 1
   scanf("%f",&PIB1);//caixa de entrada do PIB

   printf("Digite o numero de pontos turisticos: \n");//Pergunta o numero de pontos turisticos da carta 1
   scanf("%d",&pontos_turisticos1);//caixa de entrada dos Pontos turisticos

   //Abaixo são feitos os cálculos da carta 1  

   densidade1=(float)populacao1/Area1;//Calcula a densidade da carta 1
   PIB_per_capita1=(float)PIB1/populacao1;//Calcula o PIB per capita da carta 1



  //Abaixo será feita a interação com o usuario da carta 2

  printf("***Cadstro da carta 2***\n");//Inicia o cadastro da carta 2
   
   //Abaixo será feita a interação com o usuario da carta 2

  printf("Digite o seu Estado: \n");//Pergunta Estado da carta 2
   scanf("%s",Estado2);//caixa de entrada do Estado

   printf("Digite o seu codigo: \n");//Pergunta o Código da carta 2
   scanf("%s",codigo2);//Caixa de entrada do código

   printf("Digite a sua Cidade: \n");//Pergunta a Cidade da carta 2
   scanf("%s",cidade2);//caixa de entrada da Cidade

   printf("Digite a sua Populacao: \n");//Pergunta a População da carta 2
   scanf("%d",&populacao2);//caixa de entrada da população

   printf("Digite a sua Area: \n");//Pergunta a Àrea da carta 2
   scanf("%f",&Area2);//caixa de entrada da Área

   printf("Digite o seu PIB: \n");//Pergunta o PIB da carta 2
   scanf("%f",&PIB2);//caixa de entrada do PIB 

   printf("Digite o numero de pontos turisticos: \n");//Pergunta o numero de pontos turisticos da carta 2
   scanf("%d",&pontos_turisticos2);//caixa de entrada dos Pontos turisticos

   densidade2=(float)populacao2/Area2;//Calcula a densidade da carta 2
   PIB_per_capita2=(float)PIB2/populacao2;//Calcula o PIB per capita da carta 2

   //Abaixo será feita a comparação das cartas

    printf("*****Comparacao das cartas*****\n");//Inicia a comparação das cartas

    //Comaparando as Populações 

    if(populacao1>populacao2){
        printf("A carta 1 tem maior populacao que a carta 2.\n");//condição verdadeira para a população
    }else{
        printf("A carta 2 tem maior  populacao que a carta 1\n");//condição falsa para a população
    }
    //comparando as Áreas

    if(Area1>Area2){
        printf("A carta 1 tem maior area que a carta 2\n");//condição verdadeira para a área
    }else{
        printf("A carta 2 tem maior area que a carta 1\n");//condição falsa para a área
    }
    //comparando os PIBs

    if(PIB1>PIB2){
        printf("A carta 1 tem maior PIB que a carta 2.\n");//condição verdadeira para o PIB
    }else{
        printf("A carta 2 tem maior PIB que a carta 1\n");//condição falsa para o PIB
    }
    //comparando os pontos turisticos

    if(pontos_turisticos1>pontos_turisticos2){
        printf("A carta 1 tem mais pontos turisticos que a carta 2.\n");//condição verdadeira para os pontos turisticos
    }else{
        printf("A carta 2 tem mais pontos turisticos que a carta 1\n");//condição falsa para os pontos turisticos
    }
    //comparando as densidades

    if(densidade1<densidade2){
        printf("A carta 1 tem menor densidade que a carta 2.\n");//condição verdadeira para a densidade
    }else{
        printf("A carta 2 tem menor densidade que a carta 1.\n");////condição falsa para a densidade
    }
    //comparando os PIBs per capita

    if(PIB_per_capita1>PIB_per_capita2){
        printf("A carta 1 tem maior PIB per capita que a carta 2.\n");//condição verdadeira para o PIB per capita
    }else{
        printf("A carta 2 tem maior PIB per capita que a carta 1.\n");//condição falsa para o PIB per capita
    }



  return 0;//Programa finalizado com sucesso
}