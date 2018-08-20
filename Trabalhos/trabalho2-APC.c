/*Fábio Rodrigues de Andrade Santos - 160151783
  Professor: Guilherme Ramos
  APC - Turma C
  Trabalho3 - Programa com uma coleção de 5 jogos e raking dos jogos */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>



  int senha (){
    int chute, tentativa ,senha;
    char invalidez = '\n';
    tentativa=0;
    srand (time(NULL));
    senha = rand()%100000;
    printf("Para desistir, digite um numero negativo!\n");
    printf("A senha é um número entre 0 e 100000 (incluindo as extremidades)\n");
    for(tentativa=0; chute!=senha;tentativa++){
      chute = 1000001;
      printf("digite a senha: ");
      scanf("%d", &chute);
      invalidez = getchar();
      if (chute >= 0 && chute <= 100000){
        invalidez = '\n';
      }
      if (invalidez != '\n'){
        chute = 100001;
      }
      if (chute < 0) {
        system("clear");
        printf("Aquele que não é corajoso suficiente para arriscar, não alcançará nada na vida - Muhammad Ali\n");
        printf("A senha era: %d\n", senha);
        tentativa +=100;
        printf("O senhor(a) teve um total de %d tentativas (foi adicionado uma penalidade de 100 tentativas)\n", tentativa);
        return 0;
       }
        if(senha > chute){
        printf("a senha é maior que %d\n", chute);
      }
        if (chute > 100000){
           printf("Jogada inválida!(Mas a tentativa foi contada como penalidade!)\n");
        }
        if(senha < chute && chute <= 100000){
          printf("a senha é menor que %d\n", chute);  
      }  
        if(chute == senha){
        system("clear");  
        printf("Parabéns, você demorou %d tentativas para encontrar a senha %d\n", tentativa,senha); 
      }
    }
   return 0;
}

  int charadas(int n){
    int resposta,tentativa = 0;
      system("clear");
    if (n == 1){
      printf("Primeira charada\n");
      for (tentativa = 0; tentativa < 2; ++tentativa){
      resposta = 23; /*Comando que ṕermite a validação do jogo*/
        printf("Para desistir, dessa charada, digite um número negativo.\n");
        printf("Qual edíficio tem mais história que os outros?\n");
        printf("1)Igreja \n");
        printf("2)Museu \n");
        printf("3)Biblioteca \n");
        printf("4)Castelo \n");
        scanf("%d%*c", &resposta);
        system("clear");
        if(resposta < 0){
          printf("\tA persistência realiza o impossível - provérbio Chinês\n");
          tentativa = 3;
        }
        if ((resposta > 4 || resposta == 0) && tentativa == 0){
          printf("\tPor que você não digitou algo válido?\nPor causa dessa atitude você perdeu uma tentativa!\n");
          printf("\tFique atento!\n");
        }
        if (resposta != 3 && tentativa == 0 && resposta < 5){
          printf("tene novamente\n");
        }
        if(resposta == 3){  
          printf("Parabés, o senhor(a) é muito bom!\n");
          tentativa = 2;
        }
      }
    }
    n++;
    if (resposta > 4 || resposta == 0){
      printf("\tNão creio que gastou sua última tentativa com jogada inválida!\nNão faça isso na próxima vez que jogar este modo.\n");
    }
    if (resposta != 3 && tentativa < 3){
    printf("Só havia 2 tentativas, não foi dessa vez!\n");
    }
    if (n == 2){
      printf("Mais uma charada\n");
      for (tentativa = 0; tentativa < 2; ++tentativa){
      resposta = 23; /*Comando que ṕermite a validação do jogo*/
        printf("Para desistir, dessa charada, digite um número negativo.\n");
        printf("No quarto há 4 cantos, em cada canto há um gato.Na frente de cada gato há 3 gatos. Quantos gatos há no quarto?\n");
        printf("1)12 \n");
        printf("2)4 \n");
        printf("3)16 \n");
        printf("4)7 \n");
        scanf("%d%*c", &resposta);
        system("clear");
        if(resposta < 0){
          printf("\tA persistência realiza o impossível - provérbio Chinês\n");
          tentativa = 3;
        }
        if ((resposta > 4 || resposta == 0) && tentativa == 0){
          printf("\tPor que você não digitou algo válido?\nPor causa dessa atitude você perdeu uma tentativa!\n");
          printf("\tFique atento!\n");
        }
        if (resposta != 2 && tentativa == 0 && resposta < 5){
          printf("tene novamente\n");
          }
        if(resposta == 2){  
          printf("Parabés, o senhor(a) é muito bom!\n");
          tentativa = 2;
          }
        }
      }
    if (resposta > 4 || resposta == 0){
      printf("\tNão creio que gastou sua última tentativa com jogada inválida!\nNão faça isso na próxima vez que jogar este modo.\n");
    }
    if (resposta != 2 && tentativa < 3){
    printf("Só havia 2 tentativas, não foi dessa vez!\n");
    }
    n++;
    if (n == 3){
      printf("Mais uma charada\n");
      for (tentativa = 0; tentativa < 2; ++tentativa){
      resposta = 23;/*Comando que ṕermite a validação do jogo*/
        printf("Para desistir digite um número negativo.\n");
        printf("Um pai tem 3 filhas, cada uma tem 1 irmão.Quantos filhos tem esse pai?\n");
        printf("1)4 \n");
        printf("2)6 \n");
        printf("3)1 \n");
        printf("4)3 \n");
        scanf("%d%*c", &resposta);
        system("clear");
        if(resposta < 0){
          printf("\tA persistência realiza o impossível - provérbio Chinês\n");
          return 0;
        }
        if ((resposta > 4 || resposta == 0) && tentativa == 0){
          printf("\tPor que você não digitou algo válido?\nPor causa dessa atitude você perdeu uma tentativa!\n");
          printf("\tFique atento!\n");
        }
        if (resposta != 1 && tentativa == 0 && resposta < 5){
          printf("tene novamente\n");
        }
        if(resposta == 1){  
          printf("Parabés, o senhor(a) é muito bom!\n");
          tentativa = 2;
        }
      }
    }
    if (resposta > 4 || resposta == 0){
      printf("\tNão creio que gastou sua última tentativa com jogada inválida!\nNão faça isso na próxima vez que jogar este modo.\n");
    }
    if (resposta != 1){
      
    printf("Só havia 2 tentativas, não foi dessa vez!\n");
    }
    printf("Acabaram as charadas.\n");
    return 0;
  }



 int ppt (){
    int jogador1, jogador2, jogador3 = 0;
    do{
      printf("Para desistir digite um número negativo\n");
      printf("1) Pedra\n");
      printf("2) Papel\n");
      printf("3) Tesoura\n");
      printf("Jogador 1, escolha sua opção.(digite o número correspondente)\n");
      scanf("%d", &jogador1);
      getchar();
      system("clear");
      printf("Para desistir digite um número negativo\n");
      printf("1) Pedra\n");
      printf("2) Papel\n");
      printf("3) Tesoura\n");
      printf("Jogador 2, escolha sua opção.(digite o número correspondente)\n");
      scanf("%d", &jogador2);
      getchar();
      system("clear");
      printf("Para desistir digite um número negativo\n");
      printf("1) Pedra\n");
      printf("2) Papel\n");
      printf("3) Tesoura\n");
      printf("Jogador 3, escolha sua opção.(digite o número correspondente)\n");
      scanf("%d", &jogador3);
      getchar();
      system("clear");
      if (1 > jogador1 ||1 > jogador2 ||1 > jogador3 || 3 < jogador1 || 3 < jogador2 || 3 < jogador3){
        if (jogador1 >= 0 && jogador2 >= 0 && jogador3 >= 0){
          printf("todos os jogadores devem escolher um númer válido (1, 2 ou 3)\n");
        }
      }
      if(0 > jogador1 || 0 > jogador2 || 0 > jogador3){
        printf("Um de vocês desitiu, não saberemos hoje quem é melhor\n");
        return 0;
      }
     } while (1 > jogador1 ||1 > jogador2 ||1 > jogador3 || 3 < jogador1 || 3 < jogador2 || 3 < jogador3);

      /*opções de viótria do jogador 1 */
      if (jogador1 == 1  && jogador2 == 3 && jogador3 == 3){
        printf("jogardor 1 ganhou!\n");
        return 0; 
      }
      if (jogador1 == 2 && jogador2 == 1 && jogador3 == 1){
        printf("jogador 1 ganhou!\n");
        return 0;
      }
      if (jogador1 == 3 && jogador2 == 2 && jogador3 == 2){
        printf("jogador 1 ganhou!\n");
        return 0;
      }
      /*opções de viótria do jogador 2 */
      if (jogador2 == 1  && jogador1 == 2 && jogador3 == 2){
        printf("jogardor 2 ganhou!\n");
        return 0; 
      }
      if (jogador2 == 2 && jogador1 == 1 && jogador3 == 1){
        printf("jogador 2 ganhou!\n");
        return 0;
      }
      if (jogador2 == 3 && jogador1 == 2 && jogador3 == 2){
        printf("jogador 2 ganhou!\n");
        return 0;
      }
      /*opções de viótria do jogador 3 */
      if (jogador3 == 1  && jogador2 == 3 && jogador1 == 3){
        printf("jogardor 3 ganhou!\n"); 
        return 0;
      }
      if (jogador3 == 2 && jogador2 == 1 && jogador1 == 1){
        printf("jogador 3 ganhou!\n");
        return 0;
      }
      if (jogador3 == 3 && jogador2 == 2 && jogador1 == 2){
        printf("jogador 3 ganhou!\n");
        return 0;
      }
      else
        printf("Empatou, tentemos novamente.\n");
        ppt();
      return 0;
}

 void roda_a_roda(){
  char palavra[3][100],regras,chute,resposta[3][100],str1[100],str2[100],str3[100];
  int i,categoria,j,jogador=0,k,z;
  float pontos_jogador[2];
  printf("O que vocês acham de vermos as regras antes de começarmos?\n");
  for(i=0;i==0;i++){/*for utilizado somente para validação do jogo*/
  /*função toupper foi utilizada para permitir que o usuário digite com letras minúsculas*/
  /*como todos as categorias seguem uma única lógica, só haverá uma comentada, a primeira*/
    printf("(Digite \"s\" ou \"n\")\n");
    regras = getchar();
    printf("%c\n", regras);
    if (regras != 's' && regras != 'n'){/*Impede que o usuário digite comando inválido, fazendo-o voltar para o laço de repetição*/
      printf("Opção Inválida\n");
      i -= 1;
    }
    if (regras == 'n'){
      printf("Ok, vamos ao jogo.Que vença o melhor!\n");
    }
    if (regras == 's'){
      printf("Existem três palavras que vocês devem decobrir, elas são de uma categoria que escolherem dentro das opções.");
      printf("Falem letras, cada um por vez, turnos alternados, para descobrir se estas se encontram na palavra,");
      printf(" casos acertem, receberão 1 ponto por letra, mas perderão meio se errarem.Se já souberam as 3 palavras, tem que ser as 3, ");
      printf("digitem \";\" e, em seguida, as palavras na ordem que aparecem, quando for uma palavra composta, digite \"_\" no");
      printf("lugar do espaço, com essa jogada podem receber 30 pontos ou perder tudo!\n");
      printf("Boa sorte!\n");
    }
    getchar();
  }
  for(z=0;z<10;z++){/*for utilizado para usuário continuar jogando até escolher opção de sair do jogo*/
    printf("\t Qual categoria?\n\t(digite o número correspondente, por favor, não crie problemas)\n");
    printf("1)Ciência\n2)História\n3)Música\n4)Sair\n");
    scanf("%d%*c", &categoria);
    system("clear");
    switch(categoria){
      default:
        printf("Opção Inválida\n");
        scanf("%d%*c", &categoria);
        break;
        z=0;
      case 4:
        z =10;
        break;
      case 1:
        strcpy(palavra[0],"-------");
        strcpy(palavra[1],"----------");
        strcpy(palavra[2],"-----_--------");
        strcpy(resposta[0],"INERCIA");
        strcpy(resposta[1],"COMPUTADOR");
        strcpy(resposta[2],"SALTO_QUANTICO");
          do{
            printf("%s\n%s\n%s\n", palavra[0],palavra[1],palavra[2]);
            printf("categoria: Ciência\nJogador %d\nDigite \";\" para digitar todas as palavras\nQual a letra seguinte: ",jogador+1);
            scanf("%c", &chute);
            getchar();
            system("clear");
            if (chute == ';'){
              printf("%s\n%s\n%s\n", palavra[0],palavra[1],palavra[2]);
              printf("Palavra 1 : \n");
              scanf("%s", str1);/*str é a string que o usuário digita se souber todas as palavras e quiser arriscar ganhar 30 potos*/
              printf("Palavra 2 : \n");
              scanf("%s", str2);
              printf("Palavra 3 : \n");
              scanf("%s", str3);
              for (i = 0; str3[i]!='\0'; ++i){
                str1[i] = toupper(str1[i]);
                str2[i] = toupper(str2[i]);
                str3[i] = toupper(str3[i]);
              }
              printf("%s\n", str1);
              if (strcmp(str1,resposta[0])==0||strcmp(str2,resposta[1])==0||strcmp(str3,resposta[2])==0){
                strcpy(palavra[0],resposta[0]);
                strcpy(palavra[1],resposta[1]);
                strcpy(palavra[2],resposta[2]);
                pontos_jogador[jogador] += 30;
              }else{/*else indica se o usuário errar alguma das palavras e o if indica se este acertar*/
                strcpy(palavra[0],resposta[0]);
                strcpy(palavra[1],resposta[1]);
                strcpy(palavra[2],resposta[2]);
                pontos_jogador[jogador] = 0;
              }
            }
            if (chute >= 'a' && chute <= 'z'){/*esse conjunto serve para o computador checar se alguma letra do chute do usário está em uma das palvvras e trocar os "-" pela letra em sua respectiva posição*/
            chute = toupper(chute);
            }
            for (i = 0;i<3; ++i){/*a condição de parada do segundo for foi utilizada por ser uma sting, é convencionado que seu último caractere será o "\0", enquanto o primeiro for foi colocado um número pois só tem 3 palavras*/
              for (j = 0; palavra[i][j] != '\0'; ++j){
                if (chute == resposta[i][j]){
                  palavra[i][j] = chute;
                  for (k = 0; k < 1; ++k){
                    pontos_jogador[jogador] += 1;/*os pontos dos jogadores estão em um vetor de tamanho 2, como a variavel jogador alterna o tempo todo, a pontuação fica salva noo respectivo jogador*/              
                  }
                  if(chute != resposta[i][j]){pontos_jogador[jogador] -= 0.5;}
                }
              }
            }
            chute = '\0';/*modificando o chute para a letra do usuário antes de este digitar de novo*/
            if (jogador == 0){
              jogador += 1;/*esse if e else permite que uma única variável alterne os jogadores*/
            }else{jogador -= 1;}
          }while(strcmp(palavra[0],resposta[0])!=0||strcmp(palavra[1],resposta[1])!=0||strcmp(palavra[2],resposta[2])!=0);/*os jogadores ficam no jogo até as palavras serem formadas*/
          system("clear");
          printf("%s\n%s\n%s\n", palavra[0],palavra[1],palavra[2]);
          printf("jogador 1: %g\nJogador 2: %g\n", pontos_jogador[0],pontos_jogador[1]);
      break;
      z=0;
    case 2:
        strcpy(palavra[0],"--------");
        strcpy(palavra[1],"---_--------");
        strcpy(palavra[2],"--------");
        strcpy(resposta[0],"WATERLOO");
        strcpy(resposta[1],"ADA_LOVELACE");
        strcpy(resposta[2],"RASPUTIN");
        do{
          printf("%s\n%s\n%s\n", palavra[0],palavra[1],palavra[2]);
          printf("categoria: História\nJogador %d\nDigite \";\" para digitar todas as palavras\nQual a letra seguinte: ",jogador+1);
          scanf("%c", &chute);
          getchar();
          system("clear");
          if (chute == ';'){
              printf("%s\n%s\n%s\n", palavra[0],palavra[1],palavra[2]);
              printf("Palavra 1 : \n");
              scanf("%s", str1);
              printf("Palavra 2 : \n");
              scanf("%s", str2);
              printf("Palavra 3 : \n");
              scanf("%s", str3);
              for (i = 0; str3[i]!='\0'; ++i){
                str1[i] = toupper(str1[i]);
                str2[i] = toupper(str2[i]);
                str3[i] = toupper(str3[i]);
              }
              printf("%s\n", str1);
              if (strcmp(str1,resposta[0])==0||strcmp(str2,resposta[1])==0||strcmp(str3,resposta[2])==0){
                strcpy(palavra[0],resposta[0]);
                strcpy(palavra[1],resposta[1]);
                strcpy(palavra[2],resposta[2]);
                pontos_jogador[jogador] += 30;
              }else{
                strcpy(palavra[0],resposta[0]);
                strcpy(palavra[1],resposta[1]);
                strcpy(palavra[2],resposta[2]);
                pontos_jogador[jogador] = 0;
              }
            }
          if (chute >= 'a' && chute <= 'z'){
            chute = toupper(chute);
          }
          for (i = 0;i<3; ++i){
            for (j = 0; palavra[i][j] != '\0'; ++j){
              if (chute == resposta[i][j]){
                palavra[i][j] = chute;
                for (k = 0; k < 1; ++k){
                  pontos_jogador[jogador] += 1;             
                  if(chute != resposta[i][j]){pontos_jogador[jogador] -= 0.5;}
                }
              }
            }
          }
          chute = '\0';
          if (jogador == 0){
            jogador += 1;
          }else{jogador -= 1;}
        }while(strcmp(palavra[0],resposta[0])!=0||strcmp(palavra[1],resposta[1])!=0||strcmp(palavra[2],resposta[2])!=0);
        system("clear");
        printf("%s\n%s\n%s\n", palavra[0],palavra[1],palavra[2]);
        printf("jogador 1: %g\nJogador 2: %g\n", pontos_jogador[0],pontos_jogador[1]);
      break;
      case 3:
      z=0;
        strcpy(palavra[0],"------_-------");
        strcpy(palavra[1],"---------");
        strcpy(palavra[2],"----_------_-----_-----");
        strcpy(resposta[0],"WESLEY_SAFADAO");
        strcpy(resposta[1],"BEETHOVEN");
        strcpy(resposta[2],"FIVE_FINGER_DEATH_PUNCH");
        do{
          printf("%s\n%s\n%s\n", palavra[0],palavra[1],palavra[2]);
          printf("categoria: Música\nJogador %d\nDigite \";\" para digitar todas as palavras\nQual a letra seguinte: ",jogador+1);
          scanf("%c", &chute);
          getchar();
          system("clear");
          if (chute == ';'){
              printf("%s\n%s\n%s\n", palavra[0],palavra[1],palavra[2]);
              printf("Palavra 1 : \n");
              scanf("%s", str1);
              printf("Palavra 2 : \n");
              scanf("%s", str2);
              printf("Palavra 3 : \n");
              scanf("%s", str3);
              for (i = 0; str3[i]!='\0'; ++i){
                str1[i] = toupper(str1[i]);
                str2[i] = toupper(str2[i]);
                str3[i] = toupper(str3[i]);
              }
              printf("%s\n", str1);
              if (strcmp(str1,resposta[0])==0||strcmp(str2,resposta[1])==0||strcmp(str3,resposta[2])==0){
                strcpy(palavra[0],resposta[0]);
                strcpy(palavra[1],resposta[1]);
                strcpy(palavra[2],resposta[2]);
                pontos_jogador[jogador] += 30;
              }else{
                strcpy(palavra[0],resposta[0]);
                strcpy(palavra[1],resposta[1]);
                strcpy(palavra[2],resposta[2]);
                pontos_jogador[jogador] = 0;
              }
            }
          if (chute >= 'a' && chute <= 'z'){
            chute = toupper(chute);
          }
          for (i = 0;i<3; ++i){
            for (j = 0; palavra[i][j] != '\0'; ++j){
              if (chute == resposta[i][j]){
                palavra[i][j] = chute;
                for (k = 0; k < 1; ++k){
                  pontos_jogador[jogador] += 1;             
                  if(chute != resposta[i][j]){pontos_jogador[jogador] -= 0.5;}
                }
              }
            }
          }
          chute = '\0';
          if (jogador == 0){
            jogador += 1;
          }else{jogador -= 1;}
        }while(strcmp(palavra[0],resposta[0])!=0||strcmp(palavra[1],resposta[1])!=0||strcmp(palavra[2],resposta[2])!=0);
        system("clear");
        printf("%s\n%s\n%s\n", palavra[0],palavra[1],palavra[2]);
        printf("jogador 1: %g\nJogador 2: %g\n", pontos_jogador[0],pontos_jogador[1]);
      break;
      z=0;
    }
  }
}

int campo_minado(){
    char campo[6][6],troca_de_matriz;
    int i,j,k,z,campo_minado[6][6],mina_x[15],mina_y[15],bombas_em_volta=0,tentativa_y,tentativa_x;
     printf("\t\tBem vindo ao Campo Minado\n");
    printf("1) Jogar\n");
    printf("2) Regras\n");
    printf("3) Sair\n");
    scanf("%d", &k);
    do{
        switch(k){
            case 1:
            break;
            case 2:
                printf("Existe um tabuleiro 6x6 que contem bombas escondidas dentro dele, seu dever é escolher uma coordenada, se esta não for uma bomba, aparecerá um número indicando quantas bombas há em volta deste local, por meio dessa revelação, você deverá escolher as seguines casas sem acertar uma bomba.\n");
                printf("Vamos jogar!!\n");
                k = 1;
            break;
            case 3:
                return 0;
            default:
                printf("Não perca meu tempo, digite algo válido, por favor.\n");
                scanf("%d", &k);
            break;
        }
    }while(k != 1);


    srand (time(NULL));
    for (i = 0; i < 15; ++i){/*comando para criar, no máximo, as coordenadas de 15 bombas.Seria menor que 15 se as coordenadas se repetirem*/
        mina_y[i] = rand()%6;
        mina_x[i] = rand()%6;
    }
    for (i = 0;i < 15; ++i){
        campo_minado[mina_y[i]][mina_x[i]] = -1;
        for (j = 0; j < 15; ++j){
            if (campo_minado[i][j] != campo_minado[mina_y[i]][mina_x[i]]){
            campo_minado[i][j] = 0;
            }
        }
    }
    for (i = 0; i < 6; ++i){/*gerando as quantidades de bombas em volta de cada coordenada*/
        for (j = 0; j < 6; ++j){
            if (campo_minado[i][j] == 0){
                for (k = i-1; k <= i+1; ++k){
                    for (z = j-1; z <= j+1; ++z){
                        if (k<0){/*conjunto de if que se a coordenada superar a borda, essa volta para a borda*/
                            k=0;
                        }
                        if (k>5){
                            k=5;
                        }
                        if (z<0){
                            z=0;
                        }
                        if (z>5){
                            z=5;
                        }
                        if (campo_minado[k][z] == -1){
                            bombas_em_volta++;
                        }
                        if (k==5){/*comando que permite que o for acabe e não entre em loop infinito*/
                            k++;
                        }
                        if (z==5){
                            z++;
                        }
                    }
                }
            }
            if (campo_minado[i][j] != campo_minado[mina_y[i]][mina_x[i]]){/*comando que troca somente as casa que não contenham bomba*/
                campo_minado[i][j] = bombas_em_volta;
            }
            bombas_em_volta =0;
            
        }
    }
    for (i = 0; i < 6; ++i){
        strcpy(campo[i],"#");
    }



    do{

        printf("\ny\n");
        for (i = 0; i < 6; ++i){
            printf("%d - ", i);
            for (j = 0; j < 6; ++j){
                printf("%s ", campo[i]);
            }
            printf("\n");
        }
        printf("\n");
        printf("x---0 1 2 3 4 5\n\n");
        
        printf("Quando acabar, ou quiser sair, digite \"10\" nas coordenadas.\n");
        printf("Coordenada em Y: ");
        scanf("%d%*c", &tentativa_y);
        printf("\n");
        printf("Coordenada em X: ");
        scanf("%d%*c", &tentativa_x);
        printf("\n");
        if (tentativa_y == 10 && tentativa_x == 10){
            return 0;
        }
        i = 0;
        for (troca_de_matriz = '0'; troca_de_matriz < '9'; ++troca_de_matriz){/*como o máximo de bombas que é possível ter eme volta são 8, esse comando faz a troca da matiz auxiliar inteira, para a matriz principal, que é do tipo char*/
                if (campo_minado[tentativa_y][tentativa_x] == i){
                    campo[tentativa_y][tentativa_x] = troca_de_matriz;
                }
                if (campo_minado[tentativa_y][tentativa_x] == -1){
                    for (k = 0; k < 6; ++k){
                        for (j = 0; j < 6; ++j){
                            if (campo_minado[k][j]){
                                campo[k][j] = 'X';
                            }
                        }
                    }
                }
        i++;
        }
        if (campo_minado[tentativa_y][tentativa_x]==-1){
            printf("É uma pena, você explodiu uma bomba!\nFica pra pŕoxima, um dia você ganha.");
            printf("\ny\n");
        for (i = 0; i < 6; ++i){
            printf("%d - ", i);
            for (j = 0; j < 6; ++j){
                printf("%s ", campo[i]);
            }
            printf("\n");
        }
        }
    }while(campo_minado[tentativa_y][tentativa_x] != -1);



return 0;
}




int main(){
  int opcao;
  printf("\n\t Passatempo do Fábio\n\t -------------------\n");
  printf("O que o senhor(a) deseja?\n");
  printf("1) Senha\n");
  printf("2) Charadas\n");
  printf("3) Pedra-Papel-tesoura (3 jogadores)\n");
  printf("4) Roda a Roda (2 jogadores)\n");
  printf("5) Campo Minado\n");
  printf("6) Sair \n");
  for (scanf("%d", &opcao); opcao != 6 ; scanf("%d", &opcao)){
  
    switch(opcao){
      default:
        printf("NÃO PODE! DEVE ESCOLHER UMA OPÇÃO VÁLIDA!\n");
        scanf("%d",&opcao);
        getchar();
      break;
      case 1:
        system("clear");
        printf("Vamos jogar Senha então (>o_o)>\n");
        senha();
      break;
      case 2:/*Rever validação do jogo !!!!!*/
        system("clear");
        printf("Espero que goste dessas charadas (?_?)\n");
        charadas(1);
      break;
      case 3:
        system("clear");
        printf("Veremos quem será o campeão do Pedra, Papel ou Tesoura...\n");
        ppt();
      break;
      case 4:
        system("clear");
        printf("Agora é hora de testarmos o conhecimento...\n");
        getchar();
        roda_a_roda();
        break;
      case 5:
        system("clear");
        printf("Cuidado onde pisa...\n");
        campo_minado();
        break;
      case 6:
        system("clear");
        printf("Até a próxima\n");
        return 0;
      }
      printf("\n\t Passatempo do Fábio\n\t -------------------\n");
      printf("O que o senhor(a) deseja?\n");
      printf("1) Senha\n");
      printf("2) Charadas\n");
      printf("3) Pedra-Papel-tesoura (3 jogadores)\n");
      printf("4) Roda a Roda (2 jogadores)\n");
      printf("5) Campo Minado\n");
      printf("6) Sair \n");
  }
  system("clear");
  printf("Até a próxima\n");
  return 0;
  }
