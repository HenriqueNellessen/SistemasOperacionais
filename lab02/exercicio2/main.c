/*LABORATÓRIO 02
SISTEMAS OPERACIONAIS
DATA: 23/08/2022
EXERICICO 2
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)  {
  char arquivo1[100];
  char arquivo2[100];
  printf("Digite o nome do arquivo de origem e do arquivo destino:\n"); //(Chamadado 1 ao SO)
  scanf("%s %s", &arquivo1, &arquivo2); //Entrada de dados // //(Chamadado 2 ao SO) 

  FILE *entrada1, *entrada2; 
  entrada1 = fopen (arquivo1, "r"); // "r" = read --> Le o arquivo_1 // (Chamadado 3 ao SO)
  entrada2 = fopen (arquivo2, "w"); // "w" = write --> Escreve no arquivo_2 // (Chamadado 4 ao SO)
  
  if (entrada1 == NULL) { //Verificação, caso nao encontre o arquivo // (Chamadado 5 ao SO)
      printf ("\nArquivo não encontrado!\n"); //(Chamadado 6 ao SO)
      exit (EXIT_FAILURE); 
   }
    char conteudo;
    while ((conteudo=fgetc(entrada1))!=EOF) { //Lê cada caracter do arquivo ate o fim || EOF = End Of File // (Chamadado 7 ao SO)
      fputc(conteudo, entrada2);  //Armazena o conteudo do arquivo_1 no arquivo_2 // (Chamadado 8 ao SO)
      printf("%c", conteudo); //Imprime o conteudo do arquivo 2 (local onde foi copiado) //(Chamadado 9 ao SO)
    }
    fclose(entrada1);  //Fechando o arquivo 1 // (Chamadado 10 ao SO)
    fclose(entrada2);  //Fechando o arquivo 2 // (Chamadado 11 ao SO)

  //Foram realizadas 11 chamadas ao SO
  return 0;
}

 