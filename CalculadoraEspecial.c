#include <stdio.h>

void main(){

int menu = 1;
int c, d, contador = 0; /*para calcular o log*/
int a, b, mdc; /*para calcular o mdc*/
char caractere; /*para verificar o caractere informado*/
int t, numero = 0; /*para calcular tabuada */

  while(menu != 0){
   printf("\n\nBem vindo a Calculadora de Operacoes Especiais by Diego Resende Braz\n");
   printf("\nSelecione uma das operacoes:\n\n1- Logaritmo na base 10\n2- MDC\n3- Verificar se um caractere informado eh letra\n4- Imprimir a tabuada de um inteiro\n0- Sair\n\nInforme sua escolha: ");
   scanf("%d", &menu);

   switch(menu){
  
    case 1:
  
     contador = 0;

     printf("\nVoce selecionou a opcao: Log na base 10\n");

     printf("\nInforme um numero inteiro para calcular o log na base 10: ");
     scanf("%d", &d);
     c = d;
     for(;d > 9;){
     d = d / 10; 
     contador++;
     }
  
     printf("\nlog10(%d) = %d\n", c, contador);
    
     printf("\n\nVoltando ao menu inicial...\n");
     break;

    case 2: 
   
      printf("\nVoce selecionou a opcao: Calcular MDC\n");

      printf("\nDigite um inteiro para encontrar seu mdc: ");
      scanf("%d", &a);
      printf("\nDigite outro inteiro para encontrar seu mdc: ");
      scanf("%d", &b);

      do{ 
       mdc = a % b;
       a = b;
       b = mdc;
      }while(mdc != 0);
         printf("\nO mdc eh %d\n", a, b, mdc);
   
      printf("\n\nVoltando ao menu inicial...\n");
    
      break;

    case 3:
    
      printf("\nVoce selecionou a opcao identificador de caractere\n");

      printf("\nInforme um caractere para descobrir se ele eh uma letra, digito, operador ou sinal de pontuacao: ");
      scanf(" %c", &caractere);

      if (caractere >= 65 && caractere <= 90 || caractere >= 97 && caractere <= 122){
        printf("\nO caractere informado eh uma letra\n");
      }
    
      else if (caractere >= 48 && caractere <= 57){
        printf("\nO caractere informado eh um digito\n");
      }
    
      else if (caractere == '+' || caractere == '-' || caractere == '*' || caractere == '/' || caractere == '%' || caractere == '>' || caractere == '<' || caractere == '=' || caractere == '!' || caractere == '&' || caractere == '|'){
        printf("\nO caractere informado eh um operador\n");
      }

      else if (caractere == '.' || caractere == ',' || caractere == ';'){
        printf("\nO caractere informado eh sinal de pontuacao\n");
      }
    
      else {
        printf("\nO caractere informado eh outro\n");
      }
    
      printf("\n\nVoltando ao menu inicial...\n");
      
      break;

    case 4:
    
      printf("\nVoce selecionou a opcao: Tabuada\n");
      printf("\nInforme um numero para descobrir a sua tabuada: ");
      scanf("%d", &t);

      printf(" -----------------");
      printf("\n");
      for(numero = 0; numero <= 10; numero++){
        printf("\n| %d  X  %d  =  %d  |", t, numero, t * numero);
      }
      printf("\n");
      printf("\n -----------------");

      printf("\n\nVoltando ao menu inicial...\n");
   
      break;

    case 0:
      printf("\nSaindo...\n");
      break;

    default:
      printf("\nVoce selecionou uma opcao invalida, tente novamente\n");
      break;
   }
  }
}