#include <stdio.h>

int main() {
   //JOGO DE BATALHA DAS CARTAS

   //Abaixo são declaradas as variaveis que serão utilizadas no jogo
   char Pais1[50], Pais2[50];//Paises
   char Estado1[50], Estado2[50];//Estados 
   char cidade1[50], cidade2[50];//Cidades
   char codigo1[50],codigo2[50];//Códigos
   int populacao1, populacao2,resultado1,resultado2;//Populações e resultados
   float Area1, Area2;//Áreas 
   float PIB1, PIB2;//PIBs
   int pontos_turisticos1,pontos_turisticos2;//Pontos Turisticos
   float densidade1,densidade2;//Densidades
   float PIB_per_capita1,PIB_per_capita2;//PIBs per capita
   int escolhadacomparacao1,escolhadacomparacao2;//Essa variavel armazena a escolha do jogador para comparar os atributos das cartas

   //Abaixo será feita a interação com o usuario da carta 1

   printf("***Cadstro da carta 1***\n");//Inicia o cadastro da carta 1

   printf("Digite o seu Pais: \n");//Pergunta o Pais da carta 1
   scanf("%s",Pais1);//Caixa de entrada do Pais
   
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

   printf("Digite o seu Pais: \n");//Pergunta o Pais da carta 2
   scanf("%s",Pais2);//Caixa de entrada do Pais

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



    //Batalha das cartas 

    printf("****Batalha das cartas***\n");//Inicio da Batalha das cartas;
    printf("Digite o numero do atributo que voce desaja Batalhar\n");//Frase para informar como os jogadores podem jogar;
    printf("Brasil\n");//O País de comapração;
    printf("1. Populacao\n");//Digite 1 para coparar as populações;
    printf("2. Area\n");//Digite 2 para comparar as Aréas;
    printf("3. PIB\n");//Digite 3 para comparar os PIBs;
    printf("4. Numeros de pontos turisticos\n");//Digite 4 para comparar os pontos turisticos;
    printf("5. Densidade Populacional\n");//Digite 5 para compara as Densidade populacionais;
    printf("Escolha o Atributo\n");//Escolha uma das opções para iniciar a Batalha.
    scanf("%d",&escolhadacomparacao1);//Caixa de armazenamento da escolha do jogador 

    switch (escolhadacomparacao1) //Inicia o switch para comparar os atributos das cartas
    {
    case 1: 
        printf("População 1 X População 2\n");//Inicia a comparação das populações
        resultado1 = populacao1 > populacao2? 1 : 0; 
        break;
     case 2: 
        printf("Area 1 X Area 2\n");//Inicia a comparação das áreas
        resultado1 =( Area1 > Area2? 1 : 0 );
        break;
     case 3: 
        printf("PIB 1 X PIB 2\n");//Inicia a comparação dos PIBs
        resultado1 =( PIB1 > PIB2? 1 : 0 );
        break;
     case 4: 
        printf("Pontos Turisticos 1 X Pontos Turisticos 2\n");//Inicia a comparação dos pontos turisticos
        resultado1 =( pontos_turisticos1 > pontos_turisticos2? 1 : 0 );
        break;
     case 5: 
        printf("Densidade 1 X Densidade 2\n");//Inicia a comparação das densidades
        resultado1 =( densidade1 > densidade2? 1 : 0 );
        break;
    default:
        printf("Opcao Invalida\n");//Caso o jogador não escolha uma das opções válidas
        break;
    }
     
    printf("****Batalha das cartas***\n");//Inicio da Batalha das cartas;
    printf("Digite outro diferente para atributo para batalhar\n");//Frase para informar como os jogadores podem jogar;
    printf("Brasil\n");//O País de comapração;
    printf("1. Populacao\n");//Digite 1 para coparar as populações;
    printf("2. Area\n");//Digite 2 para comparar as Aréas;
    printf("3. PIB\n");//Digite 3 para comparar os PIBs;
    printf("4. Numeros de pontos turisticos\n");//Digite 4 para comparar os pontos turisticos;
    printf("5. Densidade Populacional\n");//Digite 5 para compara as Densidade populacionais;
    printf("Escolha o Atributo\n");//Escolha uma das opções para iniciar a Batalha.
    scanf("%d",&escolhadacomparacao2);//Caixa de armazenamento da escolha do jogador 


    if(escolhadacomparacao1==escolhadacomparacao2)//Caso o jogador escolha o mesmo atributo para batalhar
    { 
        printf("Escolha um atributo diferente do primeiro\n");

    }else{
        switch (escolhadacomparacao2) //Inicia o switch para comparar os atributos das cartas
    {
    case 1: 
        printf("População 1 X População 2\n");//Inicia a comparação das populações
        resultado1 = populacao1 > populacao2? 1 : 0;
        break;
     case 2: 
        printf("Area 1 X Area 2\n");//Inicia a comparação das áreas
        resultado1 =( Area1 > Area2? 1 : 0 );
        break;
     case 3: 
        printf("PIB 1 X PIB 2\n");//Inicia a comparação dos PIBs
        resultado1 =( PIB1 > PIB2? 1 : 0 );
        break;
     case 4: 
        printf("Pontos Turisticos 1 X Pontos Turisticos 2\n");//Inicia a comparação dos pontos turisticos
        resultado1 =( pontos_turisticos1 > pontos_turisticos2? 1 : 0 );
        break;
     case 5: 
        printf("Densidade 1 X Densidade 2\n");//Inicia a comparação das densidades
        resultado1 =( densidade1 > densidade2? 1 : 0 );
        break;
    default:
        printf("Opcao Invalida\n");//Caso o jogador não escolha uma das opções válidas
        break;
    }

    
    }

    //Abaixo será feita a Batalha das dos atributos escolhidos pelos jogadores
     printf("###---Batalha das cartas---###\n");//Inicio da Batalha das cartas;

     
     if( resultado1 && resultado2){
      printf("%s X %s\n",Pais1,Pais2);
      switch (escolhadacomparacao1)
      { case 1: printf("População 1 X População 2\n");
       printf("%.0d x %.0d\n",populacao1,populacao2);
       break;
        case 2: printf("Area 1 X Area 2\n");
        printf("%0.f x %.0f\n",Area1,Area2);
        break;
        case 3: printf("PIB 1 X PIB 2\n");
        printf("%.0f x %.0f\n",PIB1,PIB2);
        break;
        case 4: printf("Pontos Turisticos 1 X Pontos Turisticos 2\n");
        printf("%.0d x %.0d\n",pontos_turisticos1,pontos_turisticos2);
        break;
        case 5: printf("Densidade 1 X Densidade 2\n");
        printf("%.0f x %.0f\n",densidade1,densidade2);
        break;
        default: printf("Opcao Invalida\n"); break; }
  
        switch (escolhadacomparacao2)
      { case 1: printf("População 1 X População 2\n");
       printf("%.0d x %.0d\n",populacao1,populacao2);
       break;
        case 2: printf("Area 1 X Area 2\n");
        printf("%.0f x %.0f\n",Area1,Area2);
        break;
        case 3: printf("PIB 1 X PIB 2\n");
        printf("%.0f x %.0f\n",PIB1,PIB2);
        break;
        case 4: printf("Pontos Turisticos 1 X Pontos Turisticos 2\n");
        printf("%.0d x %.0d\n",pontos_turisticos1,pontos_turisticos2);
        break;
        case 5: printf("Densidade 1 X Densidade 2\n");
        printf("%.0f x %.0f\n",densidade1,densidade2);
        break;
        default: printf("Opcao Invalida\n"); break; }
        printf("Vitoria do(a) %s\n",Pais1);//Caso o jogador 1 ganhe a batalha
   
       }else if(resultado1 != resultado2){
      printf("%s X %s\n",Pais1,Pais2);//Caso o jogador 2 ganhe a batalha
       
      switch (escolhadacomparacao1)
      { case 1: printf("População 1 X População 2\n");
       printf("%.0d x %.0d\n",populacao1,populacao2);
       break;
        case 2: printf("Area 1 X Area 2\n");
        printf("%.0f x %.0f\n",Area1,Area2);
        break;
        case 3: printf("PIB 1 X PIB 2\n");
        printf("%.0f x %.0f\n",PIB1,PIB2);
        break;
        case 4: printf("Pontos Turisticos 1 X Pontos Turisticos 2\n");
        printf("%.0d x %.0d\n",pontos_turisticos1,pontos_turisticos2);
        break;
        case 5: printf("Densidade 1 X Densidade 2\n");
        printf("%.0f x %.0f\n",densidade1,densidade2);
        break;
        default: printf("Opcao Invalida\n"); break; }
  
        switch (escolhadacomparacao2)
      { case 1: printf("População 1 X População 2\n");
       printf("%.0d x %.0d\n",populacao1,populacao2);
       break;
        case 2: printf("Area 1 X Area 2\n");
        printf("%.0f x %.0f\n",Area1,Area2);
        break;
        case 3: printf("PIB 1 X PIB 2\n");
        printf("%.0f x %.0f\n",PIB1,PIB2);
        break;
        case 4: printf("Pontos Turisticos 1 X Pontos Turisticos 2\n");
        printf("%.0d x %.0d\n",pontos_turisticos1,pontos_turisticos2);
        break;
        case 5: printf("Densidade 1 X Densidade 2\n");
        printf("%.0f x %.0f\n",densidade1,densidade2);
        break;
        default: printf("Opcao Invalida\n"); break; }
  
      printf("O jogo empatou\n");//Caso o jogador 2 ganhe a batalha
      }else {
      printf("%s X %s\n",Pais1,Pais2);//Caso os jogadores empatem
      switch (escolhadacomparacao1)
      { case 1: printf("População 1 X População 2\n");
      printf("%.0d x %.0d\n",populacao1,populacao2);
      break;
      case 2: printf("Area 1 X Area 2\n");
      printf("%.0f x %.0f\n",Area1,Area2);
      break;
      case 3: printf("PIB 1 X PIB 2\n");
      printf("%.0f x %.0f\n",PIB1,PIB2);
      break;
      case 4: printf("Pontos Turisticos 1 X Pontos Turisticos 2\n");
      printf("%.0d x %.0d\n",pontos_turisticos1,pontos_turisticos2);
      break;
      case 5: printf("Densidade 1 X Densidade 2\n");
      printf("%.0f x %.0f\n",densidade1,densidade2);
      break;
      default: printf("Opcao Invalida\n"); break; }
     
      switch (escolhadacomparacao2)
      { case 1: printf("População 1 X População 2\n");
      printf("%.0d x %.0d\n",populacao1,populacao2);
      break;
      case 2: printf("Area 1 X Area 2\n");
      printf("%.0f x %.0f\n",Area1,Area2);
      break;
      case 3: printf("PIB 1 X PIB 2\n");
      printf("%.0f x %.0f\n",PIB1,PIB2);
      break;
      case 4: printf("Pontos Turisticos 1 X Pontos Turisticos 2\n");
      printf("%.0d x %.0d\n",pontos_turisticos1,pontos_turisticos2);
      break;
      case 5: printf("Densidade 1 X Densidade 2\n");
      printf("%.0f x %.0f\n",densidade1,densidade2);
      break;
      default: printf("Opcao Invalida\n"); break; }
      printf("Vitoria do(a) %s\n",Pais2);//Caso os jogadores empatem
      }
   return 0;
   
    }