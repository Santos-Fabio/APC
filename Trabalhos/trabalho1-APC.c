/*Fábio Rodrigues de Andrade Santos - 160151783
  Professor: Guilherme Ramos
  APC - Turma C
  Trabalho1 - Programa com uma coleção de 3 jogos */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


  int senha (){
    int x,t,s;
    char invalidez = '\n';
    t=0;
    srand (time(NULL));
    s = rand()%100000;
    printf("Para desistir, digite um numero negativo!\n");
    printf("A senha é um número entre 0 e 100000 (incluindo as extremidades)\n");
    for(t=0; x!=s;t++){
      x = 1000001;
      printf("digite a senha: ");
      scanf("%d", &x);
      invalidez = getchar();
      if (x >= 0 && x <= 100000){
        invalidez = '\n';
      }
      if (invalidez != '\n'){
        x = 100001;
      }
      if (x < 0) {
      system("clear");
      printf("Aquele que não é corajoso suficiente para arriscar, não alcançará nada na vida - Muhammad Ali\n");
      printf("A senha era: %d\n", s);
      t = t+100,
      printf("O senhor(a) teve um total de %d tentativas (foi adicionado uma penalidade de 100 tentativas)\n", t);
        return 0;
       }
        if(s > x){
        printf("a senha é maior que %d\n", x);
      }
        if (x > 100000){
           printf("Jogada inválida!(Mas a tentativa foi contada como penalidade!)\n");
        }
        if(s < x && x <= 100000){
          printf("a senha é menor que %d\n", x);  
      }  
        if(x == s){
        system("clear");  
        printf("Parabéns, você demorou %d tentativas para encontrar a senha %d\n", t,s); 
      }
    }
   return 0;
}

  int charadas(int n){
    int r,t = 0;
    char invalidez = '5';
      system("clear");
    if (n == 1){
      printf("Primeira charada\n");
      for (t = 0; t < 2; ++t){
      r = 23; /*Comando que ṕermite a validação do jogo*/
        printf("Para desistir, dessa charada, digite um número negativo.\n");
        printf("Qual edíficio tem mais história que os outros?\n");
        printf("1)Igreja \n");
        printf("2)Museu \n");
        printf("3)Biblioteca \n");
        printf("4)Castelo \n");
        scanf("%d", &r);
        invalidez = getchar();
        system("clear");
        if (r > 0 && r < 5){
          invalidez = '5';
        }
        if (invalidez < '0' || invalidez > '9'){
          r = 5;
        }
        if(r < 0){
          printf("A persistência realiza o impossível - provérbio Chinês\n");
          t = 3;
        }/*Conjunto de comandos que impedem o usuário de fazer comando inválido*/
        if (r > 4 && t == 0){
          printf("Por que você não digitou algo válido?\nPor causa dessa atitude você perdeu uma tentativa!\n");
          printf("Fique atento!\n");
        }
        if (r != 3 && t == 0 && r < 5){
          printf("tene novamente\n");
        }
        if(r == 3){  
          printf("Parabés, o senhor(a) é muito bom!\n");
          t = 2;
        }
      }
    }
    n++;
    if (r > 4){
      printf("Não creio que gastou sua última tentativa com jogada inválida!\nNão faça isso na próxima vez que jogar este modo.\n");
    }
    if (r != 3 && t < 3){
    printf("Só havia 2 tentativas, não foi dessa vez!\n");
    }
    if (n == 2){
      printf("Mais uma charada\n");
      for (t = 0; t < 2; ++t){
      r = 23; /*Comando que ṕermite a validação do jogo*/
        printf("Para desistir, dessa charada, digite um número negativo.\n");
        printf("No quarto há 4 cantos, em cada canto há um gato.Na frente de cada gato há 3 gatos. Quantos gatos há no quarto?\n");
        printf("1)12 \n");
        printf("2)4 \n");
        printf("3)16 \n");
        printf("4)7 \n");
        scanf("%d", &r);
        invalidez = getchar();
        system("clear");
        if (r > 0 && r < 5){
          invalidez = '5';
        }
        if (invalidez < '0' || invalidez > '9'){
          r = 5;
         }/*Conjunto de comandos que impedem o usuário de fazer comando inválido*/
        if(r < 0){
          printf("A persistência realiza o impossível - provérbio Chinês\n");
          t = 3;
        }
        if (r > 4 && t == 0){
          printf("Por que você não digitou algo válido?\nPor causa dessa atitude você perdeu uma tentativa!\n");
          printf("Fique atento!\n");
        }
        if (r != 2 && t == 0 && r < 5){
          printf("tene novamente\n");
          }
        if(r == 2){  
          printf("Parabés, o senhor(a) é muito bom!\n");
          t = 2;
          }
        }
      }
    if (r > 4){
      printf("Não creio que gastou sua última tentativa com jogada inválida!\nNão faça isso na próxima vez que jogar este modo.\n");
    }
    if (r != 2 && t < 3){
    printf("Só havia 2 tentativas, não foi dessa vez!\n");
    }
    n++;
    if (n == 3){
      printf("Mais uma charada\n");
      for (t = 0; t < 2; ++t){
      r = 23;/*Comando que ṕermite a validação do jogo*/
        printf("Para desistir digite um número negativo.\n");
        printf("Um pai tem 3 filhas, cada uma tem 1 irmão.Quantos filhos tem esse pai?\n");
        printf("1)4 \n");
        printf("2)6 \n");
        printf("3)1 \n");
        printf("4)3 \n");
        scanf("%d", &r);
        invalidez = getchar();
        system("clear");
        if (r > 0 && r < 5){
          invalidez = '5';
        }
        if (invalidez < '0' || invalidez > '9'){
          r = 5;
        } /*Conjunto de comandos que impedem o usuário de fazer comando inválido*/
        if(r < 0){
          printf("A persistência realiza o impossível - provérbio Chinês\n");
          return 0;
        }
        if (r > 4 && t == 0){
          printf("Por que você não digitou algo válido?\nPor causa dessa atitude você perdeu uma tentativa!\n");
          printf("Fique atento!\n");
        }
        if (r != 1 && t == 0 && r < 5){
          printf("tene novamente\n");
        }
        if(r == 1){  
          printf("Parabés, o senhor(a) é muito bom!\n");
          t = 2;
        }
      }
    }
    if (r > 4){
      printf("Não creio que gastou sua última tentativa com jogada inválida!\nNão faça isso na próxima vez que jogar este modo.\n");
    }
    if (r != 1){
      
    printf("Só havia 2 tentativas, não foi dessa vez!\n");
    }
    printf("Acabaram as charadas.\n");
    return 0;
  }



    int ppt (){
    int j1, j2, j3 = 0;
    do{
      printf("Para desistir digite um número negativo\n");
      printf("1) Pedra\n");
      printf("2) Papel\n");
      printf("3) Tesoura\n");
      printf("Jogador 1, escolha sua opção.(digite o número correspondente)\n");
      scanf("%d", &j1);
      getchar();
      system("clear");
      printf("Para desistir digite um número negativo\n");
      printf("1) Pedra\n");
      printf("2) Papel\n");
      printf("3) Tesoura\n");
      printf("Jogador 2, escolha sua opção.(digite o número correspondente)\n");
      scanf("%d", &j2);
      getchar();
      system("clear");
      printf("Para desistir digite um número negativo\n");
      printf("1) Pedra\n");
      printf("2) Papel\n");
      printf("3) Tesoura\n");
      printf("Jogador 3, escolha sua opção.(digite o número correspondente)\n");
      scanf("%d", &j3);
      getchar();
      system("clear");
      if (1 > j1 ||1 > j2 ||1 > j3 || 3 < j1 || 3 < j2 || 3 < j3){
        if (j1 >= 0 && j2 >= 0 && j3 >= 0){
        printf("todos os jogadores devem escolher um númer válido (1, 2 ou 3)\n");
        }
      }
      if(0 > j1 || 0 > j2 || 0 > j3){
        printf("Um de vocês desitiu, não saberemos hoje quem é melhor\n");
        return 0;
      }
     } while (1 > j1 ||1 > j2 ||1 > j3 || 3 < j1 || 3 < j2 || 3 < j3);

      /*opções de viótria do jogador 1 */
      if (j1 == 1  && j2 == 3 && j3 == 3){
        printf("jogardor 1 ganhou!\n");
        return 0; 
      }
      if (j1 == 2 && j2 == 1 && j3 == 1){
        printf("jogador 1 ganhou!\n");
        return 0;
      }
      if (j1 == 3 && j2 == 2 && j3 == 2){
        printf("jogador 1 ganhou!\n");
        return 0;
      }
      /*opções de viótria do jogador 2 */
      if (j2 == 1  && j1 == 2 && j3 == 2){
        printf("jogardor 2 ganhou!\n");
        return 0; 
      }
      if (j2 == 2 && j1 == 1 && j3 == 1){
        printf("jogador 2 ganhou!\n");
        return 0;
      }
      if (j2 == 3 && j1 == 2 && j3 == 2){
        printf("jogador 2 ganhou!\n");
        return 0;
      }
      /*opções de viótria do jogador 3 */
      if (j3 == 1  && j2 == 3 && j1 == 3){
        printf("jogardor 3 ganhou!\n"); 
        return 0;
      }
      if (j3 == 2 && j2 == 1 && j1 == 1){
        printf("jogador 3 ganhou!\n");
        return 0;
      }
      if (j3 == 3 && j2 == 2 && j1 == 2){
        printf("jogador 3 ganhou!\n");
        return 0;
      }
      else
        printf("Empatou, tentemos novamente.\n");
        ppt();
      return 0;
}




int main(){
  int opcao;
  printf("\t Passatempo do Fábio\n\t -------------------\n");
  printf("O que o senhor(a) deseja?\n");
  printf("1) Senha\n");
  printf("2) Charadas\n");
  printf("3) Pedra-Papel-tesoura (3 jogadores)\n");
  printf("4) Sair \n");
  scanf("%d", &opcao);
  do{
    while(opcao<1||opcao>4){
      printf("NÃO PODE! DEVE ESCOLHER UMA OPÇÃO VÁLIDA!\n");
      scanf("%d",&opcao);
      getchar();
    }
    if(opcao==1){
      system("clear");
      printf("Vamos jogar Senha então (>o_o)>\n");
      senha();
    }
    if (opcao == 2){
      system("clear");
      printf("Espero que goste dessas charadas (?_?)\n");
      charadas(1); 
    }
    if (opcao == 3){
      system("clear");
      printf("Veremos quem será o campeão do Pedra, Papel ou Tesoura...\n");
      ppt();
    }
    if (opcao == 4){
      system("clear");
      printf("Até a próxima\n");
      return 0;
    }
    if (opcao != 4){
    printf("\t Passatempo do Fábio\n\t -------------------\n");
    printf("\nO que o senhor(a) deseja?\n");
    printf("1) Senha\n");
    printf("2) Charadas\n");
    printf("3) Pedra-Papel-tesoura (3 jogadores)\n");
    printf("4) Sair \n");
    opcao = 0;
    scanf("%d", &opcao);
    getchar();
    } 
  }while (opcao != 4); 
    system("clear");
    printf("Até a próxima!\n");
  return 0;
  }
